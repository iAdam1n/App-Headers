/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class SKPFeedbackData, SKPFeedbackView, NSMutableArray, NSString;

@interface SKPFeedbackViewController : SKPViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {

	BOOL _submitting;
	SKPFeedbackData* _feedback;
	SKPFeedbackView* _feedbackView;
	NSMutableArray* _allSortedCoreLibLogFileEntries;
	NSMutableArray* _startupLogFileEntries;
	NSMutableArray* _mediaStackLogFileEntries;
	NSMutableArray* _screenshotFileEntries;

}

@property (nonatomic,readonly) SKPFeedbackData * feedback;                                 //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,retain) SKPFeedbackView * feedbackView;                               //@synthesize feedbackView=_feedbackView - In the implementation block
@property (nonatomic,retain) NSMutableArray * allSortedCoreLibLogFileEntries;              //@synthesize allSortedCoreLibLogFileEntries=_allSortedCoreLibLogFileEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * startupLogFileEntries;                       //@synthesize startupLogFileEntries=_startupLogFileEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * mediaStackLogFileEntries;                    //@synthesize mediaStackLogFileEntries=_mediaStackLogFileEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * screenshotFileEntries;                       //@synthesize screenshotFileEntries=_screenshotFileEntries - In the implementation block
@property (assign,nonatomic) BOOL submitting;                                              //@synthesize submitting=_submitting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeKeyboardNotifications;
-(void)unobserveKeyboardNotifications;
-(id)initWithFeedbackData:(id)arg1 ;
-(void)didTapDone:(id)arg1 ;
-(void)didTapCancel:(id)arg1 ;
-(void)didChangeNumberOfLogsToUpload:(id)arg1 ;
-(void)registerReusableCellForCollectionView:(id)arg1 ;
-(void)didTapCancel;
-(void)checkConnectivity:(/*^block*/id)arg1 declineBlock:(/*^block*/id)arg2 ;
-(void)attachScreenshot:(id)arg1 withName:(id)arg2 ;
-(void)prepareSkyLibLogs;
-(void)prepareMediaStackLogs;
-(void)prepareStartupLogs;
-(void)updateCoreLibLogInfoView;
-(void)updateMediaStackLogView;
-(void)updateStartupLogView;
-(NSMutableArray *)allSortedCoreLibLogFileEntries;
-(NSMutableArray *)mediaStackLogFileEntries;
-(id)calculateFileSize:(long long)arg1 inCollection:(id)arg2 ;
-(id)humanReadableLogSizeString:(id)arg1 ;
-(NSMutableArray *)startupLogFileEntries;
-(void)showAlertMessageWithTitle:(id)arg1 message:(id)arg2 buttonText:(id)arg3 ;
-(void)didTapAddScreenshot;
-(BOOL)submitting;
-(BOOL)validateFieldContentLength:(id)arg1 content:(id)arg2 fieldTitle:(id)arg3 ;
-(int)numberOfLogFilesSelected;
-(unsigned long long)numberOfStartupLogs;
-(void)submitFeedback;
-(void)displayPrivacyNotice:(long long)arg1 maxNumberOfMediaStackLogs:(long long)arg2 acceptBlock:(/*^block*/id)arg3 ;
-(id)findCreationDateString:(int)arg1 ;
-(void)setSubmitting:(BOOL)arg1 ;
-(id)postFeedbackURLRequest:(id)arg1 ;
-(NSMutableArray *)screenshotFileEntries;
-(int)numberOfMediaStackLogsSelected;
-(void)uploadFiles:(id)arg1 numberOfLogs:(long long)arg2 includeMediaStackLogs:(BOOL)arg3 includeStartupLogs:(BOOL)arg4 ;
-(void)sendFeedbackRequestToParticipants:(id)arg1 ;
-(id)getClientFeedbackRequestLink:(id)arg1 ;
-(id)aliasToSubmit;
-(id)commentToSubmit:(id)arg1 ;
-(id)titleToSubmit;
-(id)uploadNameForFileName:(id)arg1 ;
-(id)temporaryCopyForLogFileEntry:(id)arg1 ;
-(void)setAllSortedCoreLibLogFileEntries:(NSMutableArray *)arg1 ;
-(void)setStartupLogFileEntries:(NSMutableArray *)arg1 ;
-(void)setMediaStackLogFileEntries:(NSMutableArray *)arg1 ;
-(void)setScreenshotFileEntries:(NSMutableArray *)arg1 ;
-(id)otherParticipants;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SKPFeedbackData *)feedback;
-(void)dismissKeyboard;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)language;
-(SKPFeedbackView *)feedbackView;
-(void)setFeedbackView:(SKPFeedbackView *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
