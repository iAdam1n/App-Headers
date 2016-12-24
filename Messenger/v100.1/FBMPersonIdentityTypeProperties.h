/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMPersonRegularIdentityTypeProperties, FBMPersonWorkIdentityTypeProperties;

@interface FBMPersonIdentityTypeProperties : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	FBMPersonRegularIdentityTypeProperties* _regularPersonProperties;
	FBMPersonWorkIdentityTypeProperties* _workPersonProperties;

}
+(id)regularPersonProperties:(id)arg1 ;
+(id)workPersonProperties:(id)arg1 ;
-(void)matchRegularPersonProperties:(/*^block*/id)arg1 workPersonProperties:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
