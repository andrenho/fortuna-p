mkdir -p mnt
sudo mount /dev/sdb1 mnt
sudo cp fortunap-vm-pico.uf2 mnt/
sudo umount mnt