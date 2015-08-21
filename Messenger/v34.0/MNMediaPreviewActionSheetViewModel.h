/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface MNMediaPreviewActionSheetViewModel : FBValueObject <NSCopying> {

	BOOL _scalePreviewViewToFit;
	BOOL _previewIsFullWidth;
	BOOL _canEdit;
	NSString* _sendButtonTitle;
	double _maxPreviewHeight;
	double _previewAspectRatio;
	double _horizontalPadding;

}

@property (nonatomic,copy,readonly) NSString * sendButtonTitle;              //@synthesize sendButtonTitle=_sendButtonTitle - In the implementation block
@property (nonatomic,readonly) double maxPreviewHeight;                      //@synthesize maxPreviewHeight=_maxPreviewHeight - In the implementation block
@property (nonatomic,readonly) double previewAspectRatio;                    //@synthesize previewAspectRatio=_previewAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL scalePreviewViewToFit;                   //@synthesize scalePreviewViewToFit=_scalePreviewViewToFit - In the implementation block
@property (nonatomic,readonly) BOOL previewIsFullWidth;                      //@synthesize previewIsFullWidth=_previewIsFullWidth - In the implementation block
@property (nonatomic,readonly) double horizontalPadding;                     //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (nonatomic,readonly) BOOL canEdit;                                 //@synthesize canEdit=_canEdit - In the implementation block
-(BOOL)scalePreviewViewToFit;
-(double)previewAspectRatio;
-(BOOL)previewIsFullWidth;
-(double)maxPreviewHeight;
-(NSString *)sendButtonTitle;
-(id)initWithSendButtonTitle:(id)arg1 maxPreviewHeight:(double)arg2 previewAspectRatio:(double)arg3 scalePreviewViewToFit:(BOOL)arg4 previewIsFullWidth:(BOOL)arg5 horizontalPadding:(double)arg6 canEdit:(BOOL)arg7 ;
-(BOOL)canEdit;
-(double)horizontalPadding;
@end

