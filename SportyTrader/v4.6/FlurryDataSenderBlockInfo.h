/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/NSCoding.h>

@class NSString, NSDate;

@interface FlurryDataSenderBlockInfo : NSObject <NSCoding> {

	NSString* _identifier;
	unsigned long long _dataSize;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long dataSize;              //@synthesize dataSize=_dataSize - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
-(BOOL)deletePersistentData;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(id)data;
-(BOOL)setData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(unsigned long long)dataSize;
-(void)setDataSize:(unsigned long long)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
@end

