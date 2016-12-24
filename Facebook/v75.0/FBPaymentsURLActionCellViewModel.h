/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
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
