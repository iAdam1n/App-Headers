//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPViewController.h"

#import "MFMailComposeViewControllerDelegate.h"

@class MKTextView, NSString;

@interface SKPDebugConsoleViewController : SKPViewController <MFMailComposeViewControllerDelegate>
{
    MKTextView *_textView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
- (void)didCancelConsoleView:(id)arg1;
- (void)didTapSendEmail:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)loadView;
@property(readonly, nonatomic) MKTextView *textView; // @synthesize textView=_textView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
