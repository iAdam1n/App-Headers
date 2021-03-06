/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMediaPreviewActionSheetViewModel : FBValueObject <NSCopying> {

	BOOL _scalePreviewViewToFit;
	BOOL _previewIsFullWidth;
	BOOL _canEdit;
	NSString* _title;
	NSString* _sendButtonTitle;
	NSString* _cancelButtonTitle;
	double _maxPreviewHeight;
	double _previewAspectRatio;
	double _horizontalPadding;

}

@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * sendButtonTitle;                //@synthesize sendButtonTitle=_sendButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,readonly) double maxPreviewHeight;                        //@synthesize maxPreviewHeight=_maxPreviewHeight - In the implementation block
@property (nonatomic,readonly) double previewAspectRatio;                      //@synthesize previewAspectRatio=_previewAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL scalePreviewViewToFit;                     //@synthesize scalePreviewViewToFit=_scalePreviewViewToFit - In the implementation block
@property (nonatomic,readonly) BOOL previewIsFullWidth;                        //@synthesize previewIsFullWidth=_previewIsFullWidth - In the implementation block
@property (nonatomic,readonly) double horizontalPadding;                       //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (nonatomic,readonly) BOOL canEdit;                                   //@synthesize canEdit=_canEdit - In the implementation block
-(BOOL)scalePreviewViewToFit;
-(double)previewAspectRatio;
-(BOOL)previewIsFullWidth;
-(double)maxPreviewHeight;
-(NSString *)sendButtonTitle;
-(id)initWithTitle:(id)arg1 sendButtonTitle:(id)arg2 cancelButtonTitle:(id)arg3 maxPreviewHeight:(double)arg4 previewAspectRatio:(double)arg5 scalePreviewViewToFit:(BOOL)arg6 previewIsFullWidth:(BOOL)arg7 horizontalPadding:(double)arg8 canEdit:(BOOL)arg9 ;
-(NSString *)title;
-(double)horizontalPadding;
-(BOOL)canEdit;
-(NSString *)cancelButtonTitle;
@end

