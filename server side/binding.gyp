{
  "targets": [
    {
      "target_name": "binding",
      "sources": [ "cpp/calc.cpp" ],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}