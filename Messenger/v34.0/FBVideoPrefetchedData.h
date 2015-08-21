/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCoding.h>
#import <Messenger/NSCopying.h>

@class NSData;

@interface FBVideoPrefetchedData : NSObject <NSCoding, NSCopying> {

	unsigned long long _totalVideoLength;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned long long totalVideoLength;              //@synthesize totalVideoLength=_totalVideoLength - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                               //@synthesize data=_data - In the implementation block
-(id)initWithTotalVideoLength:(unsigned long long)arg1 data:(id)arg2 ;
-(unsigned long long)totalVideoLength;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
@end

