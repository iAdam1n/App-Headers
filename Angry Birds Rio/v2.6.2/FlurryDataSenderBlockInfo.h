/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface FlurryDataSenderBlockInfo : NSObject <NSCoding> {

	NSString* _groupIdentifier;
	NSString* _identifier;
	unsigned long long _dataSize;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long dataSize;              //@synthesize dataSize=_dataSize - In the implementation block
-(BOOL)deletePersistentData;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(id)data;
-(BOOL)setData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)dataSize;
-(void)setDataSize:(unsigned long long)arg1 ;
-(NSString *)groupIdentifier;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
@end
