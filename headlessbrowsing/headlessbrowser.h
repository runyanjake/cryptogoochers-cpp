/* github.com/runyanjake/cryptogoochers-cpp/headlessbrowsing/headlessbrowser.h
 * 
 * @author Jake Runyan github@runyanjake
 * @desc Headlessbrowser defines a class that can be used to instantiate a 
 *      selenium instance and drive a Chrome Canary or Firefox Gecko 
 *      browser programmatically.
 * 
 */

class HeadlessBrowser {
private:
    int browser_type; //0 for chrome 1 for firefox
public:
    HeadlessBrowser(int browserType);
};