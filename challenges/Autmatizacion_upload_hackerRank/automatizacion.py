from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time

driver = webdriver.Firefox()

# Abre la página de inicio de sesión de HackerRank
driver.get("https://www.hackerrank.com/login")

# Encuentra los campos de entrada para el nombre de usuario y la contraseña
username_input = driver.find_element("id","input-1")
password_input = driver.find_element("id","input-2")

# Ingresa tus credenciales de inicio de sesión
username_input.send_keys("misa.rn9912@gmail.com")
password_input.send_keys("doctorComo99123@")

# Envía el formulario de inicio de sesión
password_input.send_keys(Keys.RETURN)

# Espera a que se cargue la página de inicio después del inicio de sesión
driver.implicitly_wait(50) 

# Ir a la dirección de carga test_cases del problema
driver.get("https://www.hackerrank.com/administration/challenges/edit/400157/testcases")
driver.get("https://www.hackerrank.com/administration/challenges/edit/400157/testcases")


# interar por la cantidad de test_cases
for i in range(100):
    # Aumenta el número del archivo
    
    file_number = str(i).zfill(2)   # Rellena con ceros a la izquierda si es necesario
    # directorios completos donde se encuentran los test_cases
    print(file_number)
    input_file_path =   f"/home/misa/Descargas/test_cases/input/input{file_number}.txt"
    output_file_path =  f"/home/misa/Descargas/test_cases/output/output{file_number}.txt"
    
    
    # Encuentra y haz clic en el botón "Add Test Case"
    # add_test_case_button = driver.find_element("css selector", ".btn.add-testcase.btn-green")
    # add_test_case_button.click()
    
    add_test_case_button = WebDriverWait(driver, 10).until(
    EC.element_to_be_clickable((By.CSS_SELECTOR, ".btn.add-testcase.btn-green"))
    )
    add_test_case_button.click()
    
    # Activa los radiobottons de carga de archivos
    upload_checkboxes = driver.find_element("id","input_radio-upload")
    upload_checkboxes.click()
    upload_checkboxes = driver.find_element("id","output_radio-upload")
    upload_checkboxes.click()

    # Localiza los elementos de carga de archivos y carga los archivos
    input_file_input = driver.find_element("id","input_testcase_upload")
    input_file_input.send_keys(input_file_path)
    # dar tiempo suficiente a que suba los archivos al internet
    # time.sleep(5)
    output_file_input = driver.find_element("id","output_testcase_upload")
    output_file_input.send_keys(output_file_path)

    save_button = driver.find_element("css selector", ".btn.btn-primary.btn-large.save-testcase")

    save_button.click()
    # Esperar un rato para no sobrelapar los click y se rompa
    time.sleep(2)