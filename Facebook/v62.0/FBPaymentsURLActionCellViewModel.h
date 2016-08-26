/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBPaymentsURLActionCellViewModel : FBValueObject <NSCopying> {

	NSString* _rowTitle;
	NSString* _accessibilityHint;
	NSURL* _actionURL;

}

@property (nonatomic,copy,readonly) NSString * rowTitle;                       //@synthesize rowTitle=_rowTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityHint;              //@synthesize accessibilityHint=_accessibilityHint - In the implementation block
@property (nonatomic,copy,readonly) NSURL * actionURL;                         //@synthesize actionURL=_actionURL - In the implementation block
-(id)initWithRowTitle:(id)arg1 accessibilityHint:(id)arg2 actionURL:(id)arg3 ;
-(NSString *)rowTitle;
-(NSURL *)actionURL;
-(NSString *)accessibilityHint;
@end
