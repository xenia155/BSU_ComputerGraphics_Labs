#include "main_window.h"
#include <QApplication>
#include <QPushButton>
#include <iostream>
#include <valarray>
#include <QPainter>
#include <QSpinBox>

MainWindow::MainWindow()
    : QMainWindow(nullptr), select_color_("Select color", this),
      s_rgb_r(Qt::Orientation::Horizontal, this),
      s_rgb_g(Qt::Orientation::Horizontal, this),
      s_rgb_b(Qt::Orientation::Horizontal, this),
      b_rgb_r(this),
      b_rgb_g(this),
      b_rgb_b(this),

      s_cmy_c(Qt::Orientation::Horizontal, this),
      s_cmy_m(Qt::Orientation::Horizontal, this),
      s_cmy_y(Qt::Orientation::Horizontal, this),
      b_cmy_c(this),
      b_cmy_m(this),
      b_cmy_y(this),

      s_hsv_h(Qt::Orientation::Horizontal, this),
      s_hsv_s(Qt::Orientation::Horizontal, this),
      s_hsv_v(Qt::Orientation::Horizontal, this),
      b_hsv_h(this),
      b_hsv_s(this),
      b_hsv_v(this),

      s_hls_h(Qt::Orientation::Horizontal, this),
      s_hls_l(Qt::Orientation::Horizontal, this),
      s_hls_s(Qt::Orientation::Horizontal, this),
      b_hls_h(this),
      b_hls_l(this),
      b_hls_s(this),

      s_xyz_x(Qt::Orientation::Horizontal, this),
      s_xyz_y(Qt::Orientation::Horizontal, this),
      s_xyz_z(Qt::Orientation::Horizontal, this),
      b_xyz_x(this),
      b_xyz_y(this),
      b_xyz_z(this),

      s_lab_l(Qt::Orientation::Horizontal, this),
      s_lab_a(Qt::Orientation::Horizontal, this),
      s_lab_b(Qt::Orientation::Horizontal, this),
      b_lab_l(this),
      b_lab_a(this),
      b_lab_b(this) {
  connect(&select_color_, &QPushButton::clicked, this, &MainWindow::OnSelectColorPressed);
  connect(&s_rgb_r, &QSlider::valueChanged, this, &MainWindow::s_rgb_changed);
  connect(&s_rgb_g, &QSlider::valueChanged, this, &MainWindow::s_rgb_changed);
  connect(&s_rgb_b, &QSlider::valueChanged, this, &MainWindow::s_rgb_changed);
  connect(&b_rgb_r, &QSpinBox::textChanged, this, &MainWindow::b_rgb_changed);
  connect(&b_rgb_g, &QSpinBox::textChanged, this, &MainWindow::b_rgb_changed);
  connect(&b_rgb_b, &QSpinBox::textChanged, this, &MainWindow::b_rgb_changed);
  s_rgb_r.setFixedHeight(15);
  s_rgb_g.setFixedHeight(15);
  s_rgb_b.setFixedHeight(15);
  s_rgb_r.setFixedWidth(200);
  s_rgb_g.setFixedWidth(200);
  s_rgb_b.setFixedWidth(200);
  s_rgb_r.move(rgb_offset.x(), rgb_offset.y() + 30 + 10);
  s_rgb_g.move(rgb_offset.x(), rgb_offset.y() + 30 + 25);
  s_rgb_b.move(rgb_offset.x(), rgb_offset.y() + 30 + 40);
  b_rgb_r.setFixedWidth(40);
  b_rgb_g.setFixedWidth(40);
  b_rgb_b.setFixedWidth(40);
  b_rgb_r.move(rgb_offset.x(), rgb_offset.y());
  b_rgb_g.move(rgb_offset.x() + 50, rgb_offset.y());
  b_rgb_b.move(rgb_offset.x() + 100, rgb_offset.y());
  s_rgb_r.setMaximum(255);
  s_rgb_g.setMaximum(255);
  s_rgb_b.setMaximum(255);
  b_rgb_r.setMaximum(255);
  b_rgb_g.setMaximum(255);
  b_rgb_b.setMaximum(255);

  connect(&s_cmy_c, &QSlider::valueChanged, this, &MainWindow::s_cmy_changed);
  connect(&s_cmy_m, &QSlider::valueChanged, this, &MainWindow::s_cmy_changed);
  connect(&s_cmy_y, &QSlider::valueChanged, this, &MainWindow::s_cmy_changed);
  connect(&b_cmy_c, &QSpinBox::textChanged, this, &MainWindow::b_cmy_changed);
  connect(&b_cmy_m, &QSpinBox::textChanged, this, &MainWindow::b_cmy_changed);
  connect(&b_cmy_y, &QSpinBox::textChanged, this, &MainWindow::b_cmy_changed);
  s_cmy_c.setFixedHeight(15);
  s_cmy_m.setFixedHeight(15);
  s_cmy_y.setFixedHeight(15);
  s_cmy_c.setFixedWidth(200);
  s_cmy_m.setFixedWidth(200);
  s_cmy_y.setFixedWidth(200);
  s_cmy_c.move(cmy_offset.x(), cmy_offset.y() + 30 + 10);
  s_cmy_m.move(cmy_offset.x(), cmy_offset.y() + 30 + 25);
  s_cmy_y.move(cmy_offset.x(), cmy_offset.y() + 30 + 40);
  b_cmy_c.setFixedWidth(40);
  b_cmy_m.setFixedWidth(40);
  b_cmy_y.setFixedWidth(40);
  b_cmy_c.move(cmy_offset.x(), cmy_offset.y());
  b_cmy_m.move(cmy_offset.x() + 50, cmy_offset.y());
  b_cmy_y.move(cmy_offset.x() + 100, cmy_offset.y());

  connect(&s_hls_h, &QSlider::valueChanged, this, &MainWindow::s_hls_changed);
  connect(&s_hls_l, &QSlider::valueChanged, this, &MainWindow::s_hls_changed);
  connect(&s_hls_s, &QSlider::valueChanged, this, &MainWindow::s_hls_changed);
  connect(&b_hls_h, &QSpinBox::textChanged, this, &MainWindow::b_hls_changed);
  connect(&b_hls_l, &QSpinBox::textChanged, this, &MainWindow::b_hls_changed);
  connect(&b_hls_s, &QSpinBox::textChanged, this, &MainWindow::b_hls_changed);

  s_hls_h.setFixedHeight(15);
  s_hls_l.setFixedHeight(15);
  s_hls_s.setFixedHeight(15);
  s_hls_h.setFixedWidth(200);
  s_hls_l.setFixedWidth(200);
  s_hls_s.setFixedWidth(200);
  s_hls_h.move(hls_offset.x(), hls_offset.y() + 30 + 10);
  s_hls_l.move(hls_offset.x(), hls_offset.y() + 30 + 25);
  s_hls_s.move(hls_offset.x(), hls_offset.y() + 30 + 40);
  b_hls_h.setFixedWidth(40);
  b_hls_l.setFixedWidth(40);
  b_hls_s.setFixedWidth(40);
  b_hls_h.move(hls_offset.x(), hls_offset.y());
  b_hls_l.move(hls_offset.x() + 50, hls_offset.y());
  b_hls_s.move(hls_offset.x() + 100, hls_offset.y());

  connect(&s_hsv_h, &QSlider::valueChanged, this, &MainWindow::s_hsv_changed);
  connect(&s_hsv_s, &QSlider::valueChanged, this, &MainWindow::s_hsv_changed);
  connect(&s_hsv_v, &QSlider::valueChanged, this, &MainWindow::s_hsv_changed);
  connect(&b_hsv_h, &QSpinBox::textChanged, this, &MainWindow::b_hsv_changed);
  connect(&b_hsv_s, &QSpinBox::textChanged, this, &MainWindow::b_hsv_changed);
  connect(&b_hsv_v, &QSpinBox::textChanged, this, &MainWindow::b_hsv_changed);

  s_hsv_h.setFixedHeight(15);
  s_hsv_s.setFixedHeight(15);
  s_hsv_v.setFixedHeight(15);
  s_hsv_h.setFixedWidth(200);
  s_hsv_s.setFixedWidth(200);
  s_hsv_v.setFixedWidth(200);
  s_hsv_h.move(hsv_offset.x(), hsv_offset.y() + 30 + 10);
  s_hsv_s.move(hsv_offset.x(), hsv_offset.y() + 30 + 25);
  s_hsv_v.move(hsv_offset.x(), hsv_offset.y() + 30 + 40);
  b_hsv_h.setFixedWidth(40);
  b_hsv_s.setFixedWidth(40);
  b_hsv_v.setFixedWidth(40);
  b_hsv_h.move(hsv_offset.x(), hsv_offset.y());
  b_hsv_s.move(hsv_offset.x() + 50, hsv_offset.y());
  b_hsv_v.move(hsv_offset.x() + 100, hsv_offset.y());

  connect(&s_xyz_x, &QSlider::valueChanged, this, &MainWindow::s_xyz_changed);
  connect(&s_xyz_y, &QSlider::valueChanged, this, &MainWindow::s_xyz_changed);
  connect(&s_xyz_z, &QSlider::valueChanged, this, &MainWindow::s_xyz_changed);
  connect(&b_xyz_x, &QSpinBox::textChanged, this, &MainWindow::b_xyz_changed);
  connect(&b_xyz_y, &QSpinBox::textChanged, this, &MainWindow::b_xyz_changed);
  connect(&b_xyz_z, &QSpinBox::textChanged, this, &MainWindow::b_xyz_changed);

  s_xyz_x.setFixedHeight(15);
  s_xyz_y.setFixedHeight(15);
  s_xyz_z.setFixedHeight(15);
  s_xyz_x.setFixedWidth(200);
  s_xyz_y.setFixedWidth(200);
  s_xyz_z.setFixedWidth(200);
  s_xyz_x.move(xyz_offset.x(), xyz_offset.y() + 30 + 10);
  s_xyz_y.move(xyz_offset.x(), xyz_offset.y() + 30 + 25);
  s_xyz_z.move(xyz_offset.x(), xyz_offset.y() + 30 + 40);
  b_xyz_x.setFixedWidth(40);
  b_xyz_y.setFixedWidth(40);
  b_xyz_z.setFixedWidth(40);
  b_xyz_x.move(xyz_offset.x(), xyz_offset.y());
  b_xyz_y.move(xyz_offset.x() + 50, xyz_offset.y());
  b_xyz_z.move(xyz_offset.x() + 100, xyz_offset.y());

  connect(&s_lab_l, &QSlider::valueChanged, this, &MainWindow::s_lab_changed);
  connect(&s_lab_a, &QSlider::valueChanged, this, &MainWindow::s_lab_changed);
  connect(&s_lab_b, &QSlider::valueChanged, this, &MainWindow::s_lab_changed);
  connect(&b_lab_l, &QSpinBox::textChanged, this, &MainWindow::b_lab_changed);
  connect(&b_lab_a, &QSpinBox::textChanged, this, &MainWindow::b_lab_changed);
  connect(&b_lab_b, &QSpinBox::textChanged, this, &MainWindow::b_lab_changed);

  s_lab_l.setFixedHeight(15);
  s_lab_a.setFixedHeight(15);
  s_lab_b.setFixedHeight(15);
  s_lab_l.setFixedWidth(200);
  s_lab_a.setFixedWidth(200);
  s_lab_b.setFixedWidth(200);
  s_lab_a.setMinimum(-128);
  s_lab_b.setMinimum(-128);
  s_lab_a.setMaximum(128);
  s_lab_b.setMaximum(128);
  s_lab_l.move(lab_offset.x(), lab_offset.y() + 30 + 10);
  s_lab_a.move(lab_offset.x(), lab_offset.y() + 30 + 25);
  s_lab_b.move(lab_offset.x(), lab_offset.y() + 30 + 40);
  b_lab_l.setFixedWidth(40);
  b_lab_a.setFixedWidth(40);
  b_lab_b.setFixedWidth(40);
  b_lab_l.move(lab_offset.x(), lab_offset.y());
  b_lab_a.move(lab_offset.x() + 50, lab_offset.y());
  b_lab_b.move(lab_offset.x() + 100, lab_offset.y());
  b_lab_a.setMinimum(-128);
  b_lab_b.setMinimum(-128);
  b_lab_a.setMaximum(128);
  b_lab_b.setMaximum(128);

  select_color_.move(35, 10);
  SetAllValues(Color::null);
}

void MainWindow::paintEvent(QPaintEvent*) {
  QPainter qp(this);
  qp.save();
  qp.setPen(QPen(QColor(rgb_r, rgb_g, rgb_b)));
  qp.setBrush(QBrush(QColor(rgb_r, rgb_g, rgb_b)));
  qp.drawRect(10, 40, 150, 250);
  qp.restore();
  qp.save();
  if (warning_) {
    qp.setPen(QPen(QColor(Qt::red)));
    qp.drawText(250, 330, "Warning: this color cannot be cleanly converted to rgb");
  }
  qp.restore();
  qp.translate(0, 20);
  qp.drawText(rgb_offset.x() - 25, rgb_offset.y(), "RGB");
  qp.drawText(rgb_offset.x() - 13, rgb_offset.y() + 32, "R");
  qp.drawText(rgb_offset.x() - 13, rgb_offset.y() + 47, "G");
  qp.drawText(rgb_offset.x() - 13, rgb_offset.y() + 62, "B");

  qp.drawText(cmy_offset.x() - 25, cmy_offset.y(), "CMY");
  qp.drawText(cmy_offset.x() - 13, cmy_offset.y() + 32, "C");
  qp.drawText(cmy_offset.x() - 13, cmy_offset.y() + 47, "M");
  qp.drawText(cmy_offset.x() - 13, cmy_offset.y() + 62, "Y");

  qp.drawText(hsv_offset.x() - 25, hsv_offset.y(), "HSV");
  qp.drawText(hsv_offset.x() - 13, hsv_offset.y() + 32, "H");
  qp.drawText(hsv_offset.x() - 13, hsv_offset.y() + 47, "S");
  qp.drawText(hsv_offset.x() - 13, hsv_offset.y() + 62, "V");

  qp.drawText(hls_offset.x() - 25, hls_offset.y(), "HLS");
  qp.drawText(hls_offset.x() - 13, hls_offset.y() + 32, "H");
  qp.drawText(hls_offset.x() - 13, hls_offset.y() + 47, "L");
  qp.drawText(hls_offset.x() - 13, hls_offset.y() + 62, "S");

  qp.drawText(xyz_offset.x() - 25, xyz_offset.y(), "XYZ");
  qp.drawText(xyz_offset.x() - 13, xyz_offset.y() + 32, "X");
  qp.drawText(xyz_offset.x() - 13, xyz_offset.y() + 47, "Y");
  qp.drawText(xyz_offset.x() - 13, xyz_offset.y() + 62, "Z");

  qp.drawText(lab_offset.x() - 25, lab_offset.y(), "LAB");
  qp.drawText(lab_offset.x() - 13, lab_offset.y() + 32, "L");
  qp.drawText(lab_offset.x() - 13, lab_offset.y() + 47, "A");
  qp.drawText(lab_offset.x() - 13, lab_offset.y() + 62, "B");
}

void MainWindow::OnSelectColorPressed() {
  QColor current_color_ = QColorDialog::getColor(QColor(rgb_r, rgb_g, rgb_b));
  rgb_r = current_color_.red();
  rgb_g = current_color_.green();
  rgb_b = current_color_.blue();
  SetAllValues(Color::null);
}

void MainWindow::RecalculateAllValuesBasedOnRGB(Color c) {
  ColorSpace::Rgb src(rgb_r, rgb_g, rgb_b);

  ColorSpace::Cmy cmy;
  ColorSpace::Hsv hsv;
  ColorSpace::Hsl hsl;
  ColorSpace::Xyz xyz;
  ColorSpace::Lab lab;
  src.To<ColorSpace::Cmy>(&cmy);
  src.To<ColorSpace::Hsv>(&hsv);
  src.To<ColorSpace::Hsl>(&hsl);
  src.To<ColorSpace::Xyz>(&xyz);
  src.To<ColorSpace::Lab>(&lab);
  if (c != Color::cmy) {
    cmy_c = cmy.c;
    cmy_m = cmy.m;
    cmy_y = cmy.y;
  }
  if (c != Color::hsv) {
    hsv_h = hsv.h * 100.0 / 360.0;
    hsv_s = hsv.s;
    hsv_v = hsv.v;
  }
  if (c != Color::hls) {
    hls_h = hsl.h * 100.0 / 360.0;
    hls_s = hsl.s;
    hls_l = hsl.l;
  }
  if (c != Color::xyz) {
    xyz_x = xyz.x;
    xyz_y = xyz.y;
    xyz_z = xyz.z;
  }
  if (c != Color::lab) {
    lab_l = lab.l;
    lab_a = lab.a;
    lab_b = lab.b;
  }
}

void MainWindow::SetAllValues(Color c) {
  CheckRgb();
  QSignalBlocker block0aa(s_rgb_r);
  QSignalBlocker block1aa(s_rgb_g);
  QSignalBlocker block2aa(s_rgb_b);

  QSignalBlocker block0ab(b_rgb_r);
  QSignalBlocker block1ab(b_rgb_g);
  QSignalBlocker block2ab(b_rgb_b);

  QSignalBlocker block0a(s_cmy_c);
  QSignalBlocker block1a(s_cmy_m);
  QSignalBlocker block2a(s_cmy_y);

  QSignalBlocker block3a(b_cmy_c);
  QSignalBlocker block4a(b_cmy_m);
  QSignalBlocker block5a(b_cmy_y);

  QSignalBlocker block0(s_hls_h);
  QSignalBlocker block1(s_hls_l);
  QSignalBlocker block2(s_hls_s);

  QSignalBlocker block3(b_hls_h);
  QSignalBlocker block4(b_hls_l);
  QSignalBlocker block5(b_hls_s);

  QSignalBlocker block0aab(s_hsv_h);
  QSignalBlocker block1aab(s_hsv_s);
  QSignalBlocker block2aab(s_hsv_v);

  QSignalBlocker block0aba(b_hsv_h);
  QSignalBlocker block1aba(b_hsv_s);
  QSignalBlocker block2aba(b_hsv_v);

  QSignalBlocker block6(s_xyz_x);
  QSignalBlocker block7(s_xyz_y);
  QSignalBlocker block8(s_xyz_z);

  QSignalBlocker block9(b_xyz_x);
  QSignalBlocker block10(b_xyz_y);
  QSignalBlocker block21(b_xyz_z);

  QSignalBlocker block01(s_lab_l);
  QSignalBlocker block40(s_lab_a);
  QSignalBlocker block22(s_lab_b);

  QSignalBlocker block23(b_lab_l);
  QSignalBlocker block24(b_lab_a);
  QSignalBlocker block25(b_lab_b);
  RecalculateAllValuesBasedOnRGB(c);

  b_hsv_h.setValue(hsv_h);
  b_hsv_s.setValue(hsv_s * 100);
  b_hsv_v.setValue(hsv_v * 100);
  s_hsv_h.setValue(hsv_h);
  s_hsv_s.setValue(hsv_s * 100);
  s_hsv_v.setValue(hsv_v * 100);

  b_rgb_r.setValue(rgb_r);
  b_rgb_g.setValue(rgb_g);
  b_rgb_b.setValue(rgb_b);
  s_rgb_r.setValue(rgb_r);
  s_rgb_g.setValue(rgb_g);
  s_rgb_b.setValue(rgb_b);
  s_cmy_c.setValue(cmy_c * 100);
  s_cmy_m.setValue(cmy_m * 100);
  s_cmy_y.setValue(cmy_y * 100);
  b_cmy_c.setValue(cmy_c * 100);
  b_cmy_m.setValue(cmy_m * 100);
  b_cmy_y.setValue(cmy_y * 100);
  s_hls_h.setValue(hls_h);
  s_hls_l.setValue(hls_l);
  s_hls_s.setValue(hls_s);
  b_hls_h.setValue(hls_h);
  b_hls_l.setValue(hls_l);
  b_hls_s.setValue(hls_s);
  s_xyz_x.setValue(xyz_x);
  s_xyz_y.setValue(xyz_y);
  s_xyz_z.setValue(xyz_z);
  b_xyz_x.setValue(xyz_x);
  b_xyz_y.setValue(xyz_y);
  b_xyz_z.setValue(xyz_z);
  s_lab_l.setValue(lab_l);
  s_lab_a.setValue(lab_a);
  s_lab_b.setValue(lab_b);
  b_lab_l.setValue(lab_l);
  b_lab_a.setValue(lab_a);
  b_lab_b.setValue(lab_b);
  repaint();
}

void MainWindow::s_cmy_changed() {
  cmy_c = (double) s_cmy_c.value() / 100;
  cmy_y = (double) s_cmy_y.value() / 100;
  cmy_m = (double) s_cmy_m.value() / 100;
  cmy_to_rgb();
  SetAllValues(Color::cmy);
}

void MainWindow::b_cmy_changed() {
  cmy_c = (double) b_cmy_c.value() / 100;
  cmy_y = (double) b_cmy_y.value() / 100;
  cmy_m = (double) b_cmy_m.value() / 100;
  cmy_to_rgb();
  SetAllValues(Color::cmy);
}

void MainWindow::s_hls_changed() {
  hls_h = (double) s_hls_h.value();
  hls_l = (double) s_hls_l.value();
  hls_s = (double) s_hls_s.value();
  hls_to_rgb();
  SetAllValues(Color::hls);
}

void MainWindow::b_hls_changed() {
  hls_h = (double) b_hls_h.value();
  hls_l = (double) b_hls_l.value();
  hls_s = (double) b_hls_s.value();
  hls_to_rgb();
  SetAllValues(Color::hls);
}

void MainWindow::s_hsv_changed() {
  hsv_h = (double) s_hsv_h.value();
  hsv_s = (double) s_hsv_s.value() / 100;
  hsv_v = (double) s_hsv_v.value() / 100;
  hsv_to_rgb();
  SetAllValues(Color::hsv);
}

void MainWindow::b_hsv_changed() {
  hsv_h = (double) b_hsv_h.value();
  hsv_s = (double) b_hsv_s.value() / 100;
  hsv_v = (double) b_hsv_v.value() / 100;
  hsv_to_rgb();
  SetAllValues(Color::hsv);
}

void MainWindow::s_xyz_changed() {
  xyz_x = (double) s_xyz_x.value();
  xyz_y = (double) s_xyz_y.value();
  xyz_z = (double) s_xyz_z.value();
  xyz_to_rgb();

  SetAllValues(Color::xyz);
}

void MainWindow::b_xyz_changed() {
  xyz_x = (double) b_xyz_x.value();
  xyz_y = (double) b_xyz_y.value();
  xyz_z = (double) b_xyz_z.value();
  xyz_to_rgb();

  SetAllValues(Color::xyz);
}

void MainWindow::s_lab_changed() {
  lab_l = (double) s_lab_l.value();
  lab_a = (double) s_lab_a.value();
  lab_b = (double) s_lab_b.value();
  lab_to_rgb();
  SetAllValues(Color::lab);
}

void MainWindow::b_lab_changed() {
  lab_l = (double) b_lab_l.value();
  lab_a = (double) b_lab_a.value();
  lab_b = (double) b_lab_b.value();
  lab_to_rgb();
  SetAllValues(Color::lab);
}

void MainWindow::cmy_to_rgb() {
  ColorSpace::Cmy src(cmy_c, cmy_m, cmy_y);
  ColorSpace::Rgb res;
  src.To<ColorSpace::Rgb>(&res);
  rgb_r = res.r;
  rgb_g = res.g;
  rgb_b = res.b;
}

void MainWindow::lab_to_rgb() {
  ColorSpace::Lab src(lab_l, lab_a, lab_b);
  ColorSpace::Rgb res;
  src.To<ColorSpace::Rgb>(&res);
  rgb_r = res.r;
  rgb_g = res.g;
  rgb_b = res.b;
}

void MainWindow::xyz_to_rgb() {
  ColorSpace::Xyz src(xyz_x, xyz_y, xyz_z);
  ColorSpace::Rgb res;
  src.To<ColorSpace::Rgb>(&res);
  rgb_r = res.r;
  rgb_g = res.g;
  rgb_b = res.b;
}

void MainWindow::hls_to_rgb() {
  if (hls_s == 0) {
    hls_s = 1;
  }
  ColorSpace::Hsl src(hls_h, hls_s, hls_l);
  src.h *= 360.0 / 100;
  ColorSpace::Rgb res;
  src.To<ColorSpace::Rgb>(&res);
  rgb_r = res.r;
  rgb_g = res.g;
  rgb_b = res.b;
}

void MainWindow::hsv_to_rgb() {
  ColorSpace::Hsv src(hsv_h, hsv_s, hsv_v);
  src.h *= 360.0 / 100;
  ColorSpace::Rgb res;
  src.To<ColorSpace::Rgb>(&res);
  rgb_r = res.r;
  rgb_g = res.g;
  rgb_b = res.b;
}

void MainWindow::CheckRgb() {
  bool not_okay = false;
  auto constrain = [&](double& val) {
    if (val > 255) {
      not_okay = true;
      val = 255;
    }
    if (val < 0) {
      not_okay = true;
      val = 0;
    }
  };
  constrain(rgb_r);
  constrain(rgb_g);
  constrain(rgb_b);
  warning_ = not_okay;
}

void MainWindow::s_rgb_changed() {
  rgb_r = (double) s_rgb_r.value();
  rgb_g = (double) s_rgb_g.value();
  rgb_b = (double) s_rgb_b.value();
  SetAllValues(Color::rgb);
}

void MainWindow::b_rgb_changed() {
  rgb_r = (double) b_rgb_r.value();
  rgb_g = (double) b_rgb_g.value();
  rgb_b = (double) b_rgb_b.value();
  SetAllValues(Color::rgb);
}
