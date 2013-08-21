/* C++ code produced by gperf version 3.0.3 */
/* Command-line: gperf -L C++ -E -t /private/var/folders/td/x8798z6s16x1ydqqj9ljj_5h0000gp/T/tiger/voicerecorder-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/td/x8798z6s16x1ydqqj9ljj_5h0000gp/T/tiger/voicerecorder-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.hybridtechja.voice.ExampleProxy.h"
#include "com.hybridtechja.voice.VoicerecorderModule.h"


#line 14 "/private/var/folders/td/x8798z6s16x1ydqqj9ljj_5h0000gp/T/tiger/voicerecorder-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 8, duplicates = 0 */

class VoicerecorderBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
VoicerecorderBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
VoicerecorderBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 35,
      MAX_WORD_LENGTH = 42,
      MIN_HASH_VALUE = 35,
      MAX_HASH_VALUE = 42
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/td/x8798z6s16x1ydqqj9ljj_5h0000gp/T/tiger/voicerecorder-generated/KrollGeneratedBindings.gperf"
      {"com.hybridtechja.voice.ExampleProxy", ::com::hybridtechja::voice::voicerecorder::ExampleProxy::bindProxy, ::com::hybridtechja::voice::voicerecorder::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/td/x8798z6s16x1ydqqj9ljj_5h0000gp/T/tiger/voicerecorder-generated/KrollGeneratedBindings.gperf"
      {"com.hybridtechja.voice.VoicerecorderModule", ::com::hybridtechja::voice::VoicerecorderModule::bindProxy, ::com::hybridtechja::voice::VoicerecorderModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/td/x8798z6s16x1ydqqj9ljj_5h0000gp/T/tiger/voicerecorder-generated/KrollGeneratedBindings.gperf"

