for i in range(2,21):
    with open(f"C:\\Users\\asus\\OneDrive\\Desktop\\New_Start\\pythonfull\\tables/Table_of_{i}") as f:
        for j in range(1,11):
            f.write(f"{i} X {j}= {i*j}")
            if j!=10:
                f.write('\n')