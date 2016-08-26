/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBExceptionHandlerAppSpecificConfiguration : FBValueObject <NSCopying> {

	BOOL _uploadRecentLogs;
	NSString* _applicationFBID;
	NSString* _bundleID;
	NSString* _localeIdentifier;
	double _reportPercentage;

}

@property (nonatomic,copy,readonly) NSString * applicationFBID;               //@synthesize applicationFBID=_applicationFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localeIdentifier;              //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL uploadRecentLogs;                         //@synthesize uploadRecentLogs=_uploadRecentLogs - In the implementation block
@property (nonatomic,readonly) double reportPercentage;                       //@synthesize reportPercentage=_reportPercentage - In the implementation block
-(id)initWithApplicationFBID:(id)arg1 bundleID:(id)arg2 localeIdentifier:(id)arg3 uploadRecentLogs:(BOOL)arg4 reportPercentage:(double)arg5 ;
-(double)reportPercentage;
-(NSString *)applicationFBID;
-(BOOL)uploadRecentLogs;
-(NSString *)localeIdentifier;
-(NSString *)bundleID;
@end
