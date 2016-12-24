/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, FBComposerPostCompositionIcon, NSString;

@interface FBComposerPrivacyContent : FBValueObject <NSCopying> {

	BOOL _canViewerChangePrivacy;
	BOOL _isExpandedPrivacy;
	NSAttributedString* _text;
	FBComposerPostCompositionIcon* _icon;
	NSString* _explanationDescription;

}

@property (nonatomic,copy,readonly) NSAttributedString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPostCompositionIcon * icon;              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) BOOL canViewerChangePrivacy;                            //@synthesize canViewerChangePrivacy=_canViewerChangePrivacy - In the implementation block
@property (nonatomic,readonly) BOOL isExpandedPrivacy;                                 //@synthesize isExpandedPrivacy=_isExpandedPrivacy - In the implementation block
@property (nonatomic,copy,readonly) NSString * explanationDescription;                 //@synthesize explanationDescription=_explanationDescription - In the implementation block
-(BOOL)isExpandedPrivacy;
-(BOOL)canViewerChangePrivacy;
-(NSString *)explanationDescription;
-(id)initWithText:(id)arg1 icon:(id)arg2 canViewerChangePrivacy:(BOOL)arg3 isExpandedPrivacy:(BOOL)arg4 explanationDescription:(id)arg5 ;
-(NSAttributedString *)text;
-(FBComposerPostCompositionIcon *)icon;
@end
