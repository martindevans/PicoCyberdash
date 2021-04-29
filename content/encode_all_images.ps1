python .\encode_image.py skyline-a.bmp skyline_a.h skyline_a
python .\encode_image.py skyline-b.bmp skyline_b.h skyline_b

Get-ChildItem -Path "character" -Recurse -Filter "*.png" | ForEach-Object {
    $p = $_.FullName
    $h = Join-Path ($_.DirectoryName) ($_.BaseName + ".h")
    python .\encode_image.py $p $h $_.BaseName
}