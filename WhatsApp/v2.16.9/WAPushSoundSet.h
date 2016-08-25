/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface WAPushSoundSet : NSObject <NSCopying> {

	NSString* _name;
	NSArray* _sounds;

}

@property (nonatomic,copy) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * sounds;              //@synthesize sounds=_sounds - In the implementation block
+(id)setWithName:(id)arg1 sounds:(id)arg2 ;
+(id)findSoundByFilename:(id)arg1 inSoundSets:(id)arg2 returningSetIndex:(unsigned long long*)arg3 returningSoundIndex:(unsigned long long*)arg4 ;
-(id)initWithName:(id)arg1 sounds:(id)arg2 ;
-(NSArray *)sounds;
-(void)setSounds:(NSArray *)arg1 ;
-(unsigned long long)indexOfPushSoundWithFilename:(id)arg1 ;
-(id)pushSoundAtIndex:(unsigned long long)arg1 ;
-(void)removePushSoundAtIndex:(unsigned long long)arg1 ;
-(void)insertPushSound:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

