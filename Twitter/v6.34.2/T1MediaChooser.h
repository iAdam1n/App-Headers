/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <Twitter/T1MediaChooserCustomEditorDelegate.h>
#import <Twitter/T1CameraContainerViewControllerDelegate.h>

@protocol T1MediaChooserDelegate, T1MediaChooserCustomEditor;
@class NSArray, UINavigationController, UIImage, ALAsset, NSURL, NSError, NSString, TFNTwitterAccount, UIPopoverController, UIViewController, UIView;

@interface T1MediaChooser : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate, T1MediaChooserCustomEditorDelegate, T1CameraContainerViewControllerDelegate> {

	NSArray* _extraButtons;
	struct {
		unsigned shouldSaveToLibrary : 1;
	}  _flags;
	UINavigationController* _navigationViewController;
	BOOL _removeImage;
	id<T1MediaChooserDelegate> _delegate;
	UIImage* _image;
	ALAsset* _asset;
	NSURL* _movieURL;
	NSError* _error;
	long long _selectionType;
	NSString* _removePhotoLabel;
	TFNTwitterAccount* _account;
	/*^block*/id _block;
	long long _choices;
	UIPopoverController* _popoverController;
	UIViewController*<T1MediaChooserCustomEditor> _customEditingController;
	UIViewController* _weakSourceViewController;
	UIView* _inView;
	CGRect _fromRect;

}

@property (assign,nonatomic,__weak) id<T1MediaChooserDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) ALAsset * asset;                                                                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSURL * movieURL;                                                                   //@synthesize movieURL=_movieURL - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                    //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL removeImage;                                                                   //@synthesize removeImage=_removeImage - In the implementation block
@property (assign,nonatomic) long long selectionType;                                                            //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,copy) NSString * removePhotoLabel;                                                          //@synthesize removePhotoLabel=_removePhotoLabel - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) id block;                                                                             //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) long long choices;                                                                //@synthesize choices=_choices - In the implementation block
@property (nonatomic,retain) UIPopoverController * popoverController;                                            //@synthesize popoverController=_popoverController - In the implementation block
@property (nonatomic,retain) UIViewController*<T1MediaChooserCustomEditor> customEditingController;              //@synthesize customEditingController=_customEditingController - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * weakSourceViewController;                               //@synthesize weakSourceViewController=_weakSourceViewController - In the implementation block
@property (nonatomic,readonly) CGRect fromRect;                                                                  //@synthesize fromRect=_fromRect - In the implementation block
@property (nonatomic,readonly) UIView * inView;                                                                  //@synthesize inView=_inView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)choose:(long long)arg1 rect:(CGRect)arg2 inView:(id)arg3 customEditingController:(id)arg4 removePhotoLabel:(id)arg5 account:(id)arg6 block:(/*^block*/id)arg7 ;
+(id)choose:(long long)arg1 fromViewController:(id)arg2 customEditingController:(id)arg3 removePhotoLabel:(id)arg4 extraButtons:(id)arg5 account:(id)arg6 block:(/*^block*/id)arg7 ;
+(long long)availableOptions:(long long)arg1 ;
+(id)choose:(long long)arg1 rect:(CGRect)arg2 inView:(id)arg3 customEditingController:(id)arg4 removePhotoLabel:(id)arg5 extraButtons:(id)arg6 account:(id)arg7 block:(/*^block*/id)arg8 ;
+(id)choose:(long long)arg1 fromViewController:(id)arg2 account:(id)arg3 block:(/*^block*/id)arg4 ;
+(id)choose:(long long)arg1 fromViewController:(id)arg2 customEditingController:(id)arg3 removePhotoLabel:(id)arg4 account:(id)arg5 block:(/*^block*/id)arg6 ;
+(id)choose:(long long)arg1 rect:(CGRect)arg2 inView:(id)arg3 account:(id)arg4 block:(/*^block*/id)arg5 ;
+(BOOL)hasCamera;
-(void)addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)_showNativeCamera;
-(void)cameraContainerViewControllerDidCancel:(id)arg1 ;
-(void)cameraContainerViewController:(id)arg1 didAttachPhotoAsset:(id)arg2 ;
-(void)_showCustomCamera;
-(void)handleAssetsLibraryURL:(id)arg1 fallbackToImage:(id)arg2 ;
-(UIViewController*<T1MediaChooserCustomEditor>)customEditingController;
-(void)setSelectionType:(long long)arg1 ;
-(UIView *)inView;
-(CGRect)fromRect;
-(UIViewController *)weakSourceViewController;
-(void)setRemoveImage:(BOOL)arg1 ;
-(void)chooseExistingPhoto;
-(void)showActionSheet;
-(void)setRemovePhotoLabel:(NSString *)arg1 ;
-(id)initWithMediaChoices:(long long)arg1 viewController:(id)arg2 customEditingController:(id)arg3 removePhotoLabel:(id)arg4 extraButtons:(id)arg5 account:(id)arg6 block:(/*^block*/id)arg7 ;
-(id)initWithMediaChoices:(long long)arg1 viewController:(id)arg2 account:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithMediaChoices:(long long)arg1 rect:(CGRect)arg2 inView:(id)arg3 removePhotoLabel:(id)arg4 extraButtons:(id)arg5 account:(id)arg6 block:(/*^block*/id)arg7 ;
-(void)setCustomEditingController:(UIViewController*<T1MediaChooserCustomEditor>)arg1 ;
-(void)customEditor:(id)arg1 didEditImage:(id)arg2 ;
-(void)customEditorDidCancel:(id)arg1 ;
-(id)initWithMediaChoices:(long long)arg1 viewController:(id)arg2 customEditingController:(id)arg3 removePhotoLabel:(id)arg4 account:(id)arg5 block:(/*^block*/id)arg6 ;
-(NSURL *)movieURL;
-(void)setMovieURL:(NSURL *)arg1 ;
-(BOOL)removeImage;
-(NSString *)removePhotoLabel;
-(void)takePhoto;
-(void)show;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<T1MediaChooserDelegate>)arg1 ;
-(id<T1MediaChooserDelegate>)delegate;
-(id)topViewController;
-(UIImage *)image;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(ALAsset *)asset;
-(UIPopoverController *)popoverController;
-(void)setAsset:(ALAsset *)arg1 ;
-(void)finish;
-(NSError *)error;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(long long)choices;
-(void)_presentViewController:(id)arg1 ;
-(long long)selectionType;
@end

