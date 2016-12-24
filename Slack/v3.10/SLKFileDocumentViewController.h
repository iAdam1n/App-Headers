/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIViewController.h>
#import <Slack/SLKFileCommentsViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class SLKFile, NSString, SLKModalHeaderView, SLKFileToolbar, UILabel, UITapGestureRecognizer, UIDocumentInteractionController, SLKDependencies, SLKActivityIndicator, UIAlertController, SLKFileCommentsViewController;

@interface SLKFileDocumentViewController : UIViewController <SLKFileCommentsViewControllerDelegate, UIGestureRecognizerDelegate, UIDocumentInteractionControllerDelegate> {

	BOOL _fullscreen;
	BOOL _showComments;
	BOOL _allowFullscreenToggle;
	BOOL _loaded;
	SLKFile* _file;
	NSString* _fileId;
	SLKModalHeaderView* _titleBar;
	SLKFileToolbar* _toolbar;
	UILabel* _fileSizeLabel;
	UITapGestureRecognizer* _tapGestureRecognizer;
	long long _fileSize;
	UIDocumentInteractionController* _documentController;
	SLKDependencies* _dependencies;
	SLKActivityIndicator* _activityIndicator;
	UIAlertController* _alertController;
	SLKFileCommentsViewController* _commentsViewController;

}

@property (nonatomic,retain) SLKActivityIndicator * activityIndicator;                                   //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,getter=isAlreadyLoaded,nonatomic) BOOL loaded;                                         //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                        //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) SLKFileCommentsViewController * commentsViewController;                     //@synthesize commentsViewController=_commentsViewController - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                                      //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,retain) SLKFile * file;                                                             //@synthesize file=_file - In the implementation block
@property (nonatomic,retain) NSString * fileId;                                                          //@synthesize fileId=_fileId - In the implementation block
@property (nonatomic,retain) SLKModalHeaderView * titleBar;                                              //@synthesize titleBar=_titleBar - In the implementation block
@property (nonatomic,retain) SLKFileToolbar * toolbar;                                                   //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UILabel * fileSizeLabel;                                                    //@synthesize fileSizeLabel=_fileSizeLabel - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;                                        //@synthesize fullscreen=_fullscreen - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long fileSize;                                                         //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,getter=shouldShowComments,nonatomic) BOOL showComments;                                //@synthesize showComments=_showComments - In the implementation block
@property (nonatomic,retain) UIDocumentInteractionController * documentController;                       //@synthesize documentController=_documentController - In the implementation block
@property (assign,getter=shouldAllowFullscreenToggle,nonatomic) BOOL allowFullscreenToggle;              //@synthesize allowFullscreenToggle=_allowFullscreenToggle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFileId:(NSString *)arg1 ;
-(void)animateContentBodyIn;
-(void)animateContentBodyOut;
-(void)bringUIChromeToFront;
-(void)dismissLoadingSpinnerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateInsets;
-(id)initWithFileId:(id)arg1 dependencies:(id)arg2 ;
-(id)initWithFile:(id)arg1 dependencies:(id)arg2 ;
-(UILabel *)fileSizeLabel;
-(id)titleProgress:(double)arg1 ;
-(void)handleFileDownloadError;
-(void)openInFromRect:(CGRect)arg1 ;
-(void)setDocumentController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)documentController;
-(void)editFileTitle:(id)arg1 ;
-(SLKModalHeaderView *)titleBar;
-(void)dismissPreviewWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareFile;
-(void)setAllowFullscreenToggle:(BOOL)arg1 ;
-(BOOL)shouldShowComments;
-(void)loadFile;
-(void)getFile;
-(BOOL)isAlreadyLoaded;
-(void)animateUIChromeIn;
-(BOOL)shouldShowProgressLabel;
-(void)showProgressLabel;
-(void)disableFullscreen;
-(void)enableFullscreen;
-(BOOL)shouldAllowFullscreenToggle;
-(void)showMoreActionSheetFromRect:(CGRect)arg1 ;
-(void)showReactionsPickerFromRect:(CGRect)arg1 ;
-(void)starButtonPressed;
-(void)shareButtonPressed;
-(BOOL)shouldShowOpenInButton;
-(void)copyArchivelink;
-(void)copyImage;
-(void)saveImage;
-(void)viewInBrowser;
-(BOOL)canEditFileTitle;
-(void)showEditTitlePrompt;
-(BOOL)canDeleteFile;
-(void)deleteButtonPressedFromRect:(CGRect)arg1 ;
-(void)deleteFile;
-(void)setCommentsViewController:(SLKFileCommentsViewController *)arg1 ;
-(SLKFileCommentsViewController *)commentsViewController;
-(void)animateUIChromeOut;
-(void)avatarTapped;
-(void)handleToolbarAction:(unsigned long long)arg1 fromRect:(CGRect)arg2 ;
-(void)contentViewTapped:(id)arg1 ;
-(BOOL)isArchiveLink:(id)arg1 ;
-(void)handleCommentLink:(id)arg1 ;
-(void)forceUIToAnimateOutWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setTitleBar:(SLKModalHeaderView *)arg1 ;
-(void)setFileSizeLabel:(UILabel *)arg1 ;
-(void)downloadFile;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(SLKFileToolbar *)toolbar;
-(void)setToolbar:(SLKFileToolbar *)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(void)toggleFullscreen;
-(BOOL)isFullscreen;
-(SLKActivityIndicator *)activityIndicator;
-(void)setActivityIndicator:(SLKActivityIndicator *)arg1 ;
-(long long)fileSize;
-(void)setupData;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)showLoadingIndicator;
-(void)setFileSize:(long long)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)initWithDependencies:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)dismissView;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(NSString *)fileId;
-(void)setFile:(SLKFile *)arg1 ;
-(SLKFile *)file;
-(BOOL)showComments;
-(void)setShowComments:(BOOL)arg1 ;
@end
