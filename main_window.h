#pragma once
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMainWindow>
#include <QColorDialog>
#include <QCheckBox>
#include <QSlider>
#include <QSpinBox>
#include <QLabel>
#include "color_space.h"

enum class Color {
  rgb,
  hsv,
  hls,
  cmy,
  lab,
  xyz,
  null
};

class MainWindow : public QMainWindow {
 Q_OBJECT
 public:
  MainWindow();
 protected:
  void paintEvent(QPaintEvent*) override;

 private:
  QPushButton select_color_;
  void OnSelectColorPressed();
  void RecalculateAllValuesBasedOnRGB(Color c);
  void cmy_to_rgb();
  void xyz_to_rgb();
  void lab_to_rgb();
  void hls_to_rgb();
  void hsv_to_rgb();
  double rgb_r{255}; // 0-255
  double rgb_g{0}; // 0-255
  double rgb_b{0}; // 0-255

  QSlider s_rgb_r;
  QSlider s_rgb_g;
  QSlider s_rgb_b;
  QSpinBox b_rgb_r;
  QSpinBox b_rgb_g;
  QSpinBox b_rgb_b;

  void s_rgb_changed();
  void b_rgb_changed();

  void SetAllValues(Color c);
  double cmy_c{}; // 0-1
  double cmy_m{}; // 0-1
  double cmy_y{}; // 0-1

  QSlider s_cmy_c;
  QSlider s_cmy_m;
  QSlider s_cmy_y;

  QSpinBox b_cmy_c;
  QSpinBox b_cmy_m;
  QSpinBox b_cmy_y;

  void s_cmy_changed();
  void b_cmy_changed();

  double hsv_h{}; // 0-1
  double hsv_s{}; // 0-1
  double hsv_v{}; // 0-1

  QSlider s_hsv_h;
  QSlider s_hsv_s;
  QSlider s_hsv_v;

  QSpinBox b_hsv_h;
  QSpinBox b_hsv_s;
  QSpinBox b_hsv_v;
  void s_hsv_changed();
  void b_hsv_changed();
  double hls_h{}; // 0-1
  double hls_l{}; // 0-1
  double hls_s{}; // 0-1

  QSlider s_hls_h;
  QSlider s_hls_l;
  QSlider s_hls_s;

  QSpinBox b_hls_h;
  QSpinBox b_hls_l;
  QSpinBox b_hls_s;

  void s_hls_changed();
  void b_hls_changed();

  double xyz_x{}; // 0-1
  double xyz_y{}; // 0-1
  double xyz_z{}; // 0-1

  QSlider s_xyz_x;
  QSlider s_xyz_y;
  QSlider s_xyz_z;

  QSpinBox b_xyz_x;
  QSpinBox b_xyz_y;
  QSpinBox b_xyz_z;

  void s_xyz_changed();
  void b_xyz_changed();

  double lab_l{}; // 0-100
  double lab_a{}; // -128-128
  double lab_b{}; // -128-128

  QSlider s_lab_l;
  QSlider s_lab_a;
  QSlider s_lab_b;

  QSpinBox b_lab_l;
  QSpinBox b_lab_a;
  QSpinBox b_lab_b;

  void s_lab_changed();
  void b_lab_changed();
  bool warning_ = false;
  void CheckRgb();

  QPoint rgb_offset{200, 10};
  QPoint cmy_offset{200, 120};
  QPoint hsv_offset{430, 10};
  QPoint hls_offset{430, 120};
  QPoint xyz_offset{200, 230};
  QPoint lab_offset{430, 230};
};
