#import <Cocoa/Cocoa.h>

@class SSEMainController;


@interface SSEMainWindowController : NSWindowController
{
    IBOutlet SSEMainController *mainController;

    IBOutlet NSPopUpButton *sourcePopUpButton;
    IBOutlet NSPopUpButton *destinationPopUpButton;

    IBOutlet NSWindow *recordSheetWindow;
    IBOutlet NSProgressIndicator *sysExProgressIndicator;
    IBOutlet NSTextField *sysExProgressField;
    IBOutlet NSBox *sysExProgressBox;
}

+ (SSEMainWindowController *)mainWindowController;

// Actions

- (IBAction)selectSource:(id)sender;
- (IBAction)selectDestination:(id)sender;

- (IBAction)open:(id)sender;
- (IBAction)delete:(id)sender;
- (IBAction)recordOne:(id)sender;
- (IBAction)record:(id)sender;
- (IBAction)play:(id)sender;

// Other API

- (void)synchronizeInterface;
    // Calls each of the following
- (void)synchronizeSources;
- (void)synchronizeDestinations;

@end
