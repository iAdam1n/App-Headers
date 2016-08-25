/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack.SLKFilePickerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol SLFileUploadDelegate;
@class UILabel, UIView, UIButton, UIImage, YLProgressBar, SLFileUpload, NSURLSessionUploadTask, UIViewController, _TtC5Slack13SLKFilePicker, NSMutableArray, SLKDependencies, NSString;

@interface SLFileUploadManager : NSObject <Slack.SLKFilePickerDelegate, UIActionSheetDelegate> {

	UILabel* _uploadingLabel;
	UIView* _uploadDialog;
	UIButton* _cancelButton;
	UIImage* selectedPhoto;
	double fileSizeInMB;
	BOOL isPNG;
	YLProgressBar* _progressView;
	SLFileUpload* currentUpload;
	NSURLSessionUploadTask* uploadTask;
	UIViewController* queuedModal;
	BOOL _cancelled;
	BOOL _startPartialFail;
	BOOL _completPartialFail;
	UIViewController*<SLFileUploadDelegate> _delegate;
	UIView* _presentingView;
	_TtC5Slack13SLKFilePicker* _filePicker;
	NSMutableArray* _failedFileUploads;
	SLKDependencies* _dependencies;
	UIImage* _anImage;
	NSString* _currentFileID;
	NSString* _currentUploadKey;

}

@property (nonatomic,retain) NSMutableArray * failedFileUploads;                                   //@synthesize failedFileUploads=_failedFileUploads - In the implementation block
@property (assign,getter=wasCancelled,nonatomic) BOOL cancelled;                                   //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                                //@synthesize dependencies=_dependencies - In the implementation block
@property (assign,nonatomic,__weak) UIImage * anImage;                                             //@synthesize anImage=_anImage - In the implementation block
@property (assign,nonatomic,__weak) NSString * currentFileID;                                      //@synthesize currentFileID=_currentFileID - In the implementation block
@property (assign,nonatomic,__weak) NSString * currentUploadKey;                                   //@synthesize currentUploadKey=_currentUploadKey - In the implementation block
@property (assign,nonatomic) BOOL startPartialFail;                                                //@synthesize startPartialFail=_startPartialFail - In the implementation block
@property (assign,nonatomic) BOOL completPartialFail;                                              //@synthesize completPartialFail=_completPartialFail - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<SLFileUploadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * presentingView;                                       //@synthesize presentingView=_presentingView - In the implementation block
@property (nonatomic,retain) _TtC5Slack13SLKFilePicker * filePicker;                               //@synthesize filePicker=_filePicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDependencies:(id)arg1 ;
-(void)showNameAlertViewWithURL:(id)arg1 ;
-(void)showErrorToast;
-(void)setPresentingView:(UIView *)arg1 ;
-(void)beginFileUploadFromChat;
-(void)showNameAlertView:(id)arg1 filename:(id)arg2 path:(id)arg3 ;
-(void)uploadWithFileUpload:(id)arg1 ;
-(void)setFailedFileUploads:(NSMutableArray *)arg1 ;
-(_TtC5Slack13SLKFilePicker *)filePicker;
-(void)setFilePicker:(_TtC5Slack13SLKFilePicker *)arg1 ;
-(UIView *)presentingView;
-(void)hideUploadDialog:(BOOL)arg1 fileUpload:(id)arg2 ;
-(NSString *)currentUploadKey;
-(void)showUploadDialog:(id)arg1 ;
-(void)handleFailedUpload:(id)arg1 error:(id)arg2 ;
-(NSMutableArray *)failedFileUploads;
-(void)updateUploadDialogProgress:(double)arg1 ;
-(void)uploadImageData:(id)arg1 isPNG:(BOOL)arg2 name:(id)arg3 genericChannel:(id)arg4 fileExtension:(id)arg5 initialComment:(id)arg6 hasKey:(BOOL)arg7 ;
-(id)resizeImage:(id)arg1 width:(double)arg2 height:(double)arg3 ;
-(void)showNameAlertView:(id)arg1 image:(id)arg2 filename:(id)arg3 path:(id)arg4 ;
-(void)beginPartialUploadForChannelID:(id)arg1 fileImage:(id)arg2 ;
-(void)beginPartialUploadForUser:(id)arg1 viewController:(id)arg2 forImage:(id)arg3 fileData:(id)arg4 filename:(id)arg5 path:(id)arg6 channel:(id)arg7 ;
-(void)handleUploadFromViewController:(id)arg1 forImage:(id)arg2 fileData:(id)arg3 filename:(id)arg4 path:(id)arg5 channel:(id)arg6 ;
-(void)cancelPartialUpload:(id)arg1 fileData:(id)arg2 viewController:(id)arg3 ;
-(void)presentUploadViewController:(id)arg1 ;
-(void)setCurrentUploadKey:(NSString *)arg1 ;
-(void)setStartPartialFail:(BOOL)arg1 ;
-(void)setCurrentFileID:(NSString *)arg1 ;
-(void)setCompletPartialFail:(BOOL)arg1 ;
-(void)uploadFile:(id)arg1 name:(id)arg2 genericChannel:(id)arg3 fileExtension:(id)arg4 initialComment:(id)arg5 ;
-(void)completePartialUpload:(id)arg1 fileData:(id)arg2 filename:(id)arg3 comment:(id)arg4 channel:(id)arg5 forImage:(id)arg6 ;
-(BOOL)startPartialFail;
-(BOOL)completPartialFail;
-(void)didSelectPhotoWithPicker:(id)arg1 photo:(id)arg2 info:(id)arg3 ;
-(void)setAnImage:(UIImage *)arg1 ;
-(void)showNoPhotoAccessAlert;
-(void)uploadImageWithReduction:(double)arg1 isPng:(BOOL)arg2 ;
-(void)showFileUploadViewForImage:(id)arg1 ;
-(void)didSelectPhotoWithPicker:(id)arg1 photo:(id)arg2 ;
-(void)didSelectVideoWithPicker:(id)arg1 video:(id)arg2 info:(id)arg3 ;
-(void)didSelectImportWithPicker:(id)arg1 data:(id)arg2 fileName:(id)arg3 url:(id)arg4 ;
-(void)willPresentImportWithPicker:(id)arg1 ;
-(void)didCancelWithPicker:(id)arg1 ;
-(void)beginFileUpload;
-(id)dataForImage:(id)arg1 reduction:(double)arg2 isPNG:(BOOL)arg3 ;
-(void)failedUploadOptions:(id)arg1 ;
-(UIImage *)anImage;
-(NSString *)currentFileID;
-(SLKDependencies *)dependencies;
-(BOOL)isUploading;
-(void)setDelegate:(UIViewController*<SLFileUploadDelegate>)arg1 ;
-(void)dealloc;
-(UIViewController*<SLFileUploadDelegate>)delegate;
-(void)setCancelled:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(BOOL)wasCancelled;
-(void)cancelButtonPressed;
@end

