/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerPickerController;
@class UIViewController, FBPopoverInfo;

@interface FBComposerNavigationInfo : NSObject {

	unsigned long long _method;
	unsigned long long _options;
	UIViewController* _viewController;
	id<FBComposerPickerController> _pickerController;
	FBPopoverInfo* _popoverInfo;
	unsigned long long _destinationToPushBehindIn;

}

@property (nonatomic,readonly) UIViewController * viewController;                            //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) id<FBComposerPickerController> pickerController;              //@synthesize pickerController=_pickerController - In the implementation block
@property (nonatomic,readonly) unsigned long long method;                                    //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) FBPopoverInfo * popoverInfo;                                  //@synthesize popoverInfo=_popoverInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long destinationToPushBehindIn;                 //@synthesize destinationToPushBehindIn=_destinationToPushBehindIn - In the implementation block
+(id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 ;
+(id)modalInfoWithViewController:(id)arg1 wrapInNavigation:(BOOL)arg2 addToNewStack:(BOOL)arg3 newPushBehindContext:(BOOL)arg4 ;
+(id)infoWithPickerController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)infoWithPickerController:(id)arg1 method:(unsigned long long)arg2 ;
+(id)modalInfoWithPickerController:(id)arg1 wrapInNavigation:(BOOL)arg2 addToNewStack:(BOOL)arg3 newPushBehindContext:(BOOL)arg4 ;
+(id)modalPushBehindWithViewController:(id)arg1 destinationToPushBehindIn:(unsigned long long)arg2 ;
+(id)modalInfoWithViewController:(id)arg1 wrapInNavigation:(BOOL)arg2 addToNewStack:(BOOL)arg3 ;
+(id)popoverInfoWithViewController:(id)arg1 popoverInfo:(id)arg2 options:(unsigned long long)arg3 ;
+(id)popoverInfoWithPickerController:(id)arg1 popoverInfo:(id)arg2 options:(unsigned long long)arg3 ;
+(id)modalPushBehindWithPickerController:(id)arg1 destinationToPushBehindIn:(unsigned long long)arg2 ;
+(id)modalInfoWithPickerController:(id)arg1 wrapInNavigation:(BOOL)arg2 addToNewStack:(BOOL)arg3 ;
-(FBPopoverInfo *)popoverInfo;
-(id<FBComposerPickerController>)pickerController;
-(id)initWithMethod:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)destinationToPushBehindIn;
-(UIViewController *)viewController;
-(unsigned long long)options;
-(unsigned long long)method;
@end
