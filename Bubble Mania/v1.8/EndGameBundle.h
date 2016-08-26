/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@class NSString, NSArray, NSDictionary;

@interface EndGameBundle : ModelObject {

	long long _id;
	NSString* _name;
	NSArray* _contents;
	NSDictionary* _contentBackups;

}

@property (assign,nonatomic) long long id;                               //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * contents;                         //@synthesize contents=_contents - In the implementation block
@property (nonatomic,retain) NSDictionary * contentBackups;              //@synthesize contentBackups=_contentBackups - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(NSDictionary *)contentBackups;
-(void)setContentBackups:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)contents;
-(void)setContents:(NSArray *)arg1 ;
-(long long)id;
-(void)setId:(long long)arg1 ;
@end
