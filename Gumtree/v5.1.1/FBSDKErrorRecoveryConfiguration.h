/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface FBSDKErrorRecoveryConfiguration : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localizedRecoveryDescription;
	NSArray* _localizedRecoveryOptionDescriptions;
	unsigned long long _errorCategory;
	NSString* _recoveryActionName;

}

@property (nonatomic,readonly) NSString * localizedRecoveryDescription;                    //@synthesize localizedRecoveryDescription=_localizedRecoveryDescription - In the implementation block
@property (nonatomic,readonly) NSArray * localizedRecoveryOptionDescriptions;              //@synthesize localizedRecoveryOptionDescriptions=_localizedRecoveryOptionDescriptions - In the implementation block
@property (nonatomic,readonly) unsigned long long errorCategory;                           //@synthesize errorCategory=_errorCategory - In the implementation block
@property (nonatomic,readonly) NSString * recoveryActionName;                              //@synthesize recoveryActionName=_recoveryActionName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRecoveryDescription:(id)arg1 optionDescriptions:(id)arg2 category:(unsigned long long)arg3 recoveryActionName:(id)arg4 ;
-(NSString *)localizedRecoveryDescription;
-(NSArray *)localizedRecoveryOptionDescriptions;
-(unsigned long long)errorCategory;
-(NSString *)recoveryActionName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

