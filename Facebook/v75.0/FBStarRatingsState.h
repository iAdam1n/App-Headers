/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBStarRatingsState : NSObject <NSCoding, NSCopying> {

	unsigned long long _completionState;
	unsigned long long _completionTime;

}

@property (nonatomic,readonly) unsigned long long completionState;              //@synthesize completionState=_completionState - In the implementation block
@property (nonatomic,readonly) unsigned long long completionTime;               //@synthesize completionTime=_completionTime - In the implementation block
-(unsigned long long)completionTime;
-(unsigned long long)completionState;
-(void)setTimeAndSetCompletionState:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
