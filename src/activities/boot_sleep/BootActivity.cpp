#include "BootActivity.h"

#include <GfxRenderer.h>

#include "fontIds.h"
#include "images/CrossLarge.h"

void BootActivity::onEnter() {
  Activity::onEnter();

  const auto pageWidth = renderer.getScreenWidth();
  const auto pageHeight = renderer.getScreenHeight();

  renderer.clearScreen();
  renderer.drawImage(CrossLarge, (pageWidth + 160) / 2, (pageHeight - 160) / 2, 160, 160);
  renderer.drawCenteredText(UI_12_FONT_ID, pageHeight / 2 + 80, "hOI!!!!", true, EpdFontFamily::BOLD);
  renderer.drawCenteredText(UI_12_FONT_ID, pageHeight / 2 + 110, "tem CrossPoint BOOT...");
  renderer.drawCenteredText(UI_12_FONT_ID, pageHeight - 30, CROSSPOINT_VERSION);
  renderer.displayBuffer();
}
