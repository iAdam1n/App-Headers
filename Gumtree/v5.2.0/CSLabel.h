/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 30, 2016 at 12:04:10 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4EC3D7DE-EC7A-4340-8E6F-37E25C97EB19/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface CSLabel : NSObject {

	long long _firstOrder;
	BOOL aggregate;
	NSString* name;
	NSString* value;
	NSMutableArray* list;

}

@property (assign) NSString * name; 
@property (assign) NSString * value; 
@property (assign) BOOL aggregate; 
@property (nonatomic,retain) NSMutableArray * list; 
+(id)orderFirstLabels;
+(id)orderLastLabels;
+(id)filteredLabelNameLetters;
-(id)init:(id)arg1 value:(id)arg2 aggregate:(BOOL)arg3 ;
-(long long)isFirstOrder;
-(long long)isLastOrder;
-(BOOL)aggregate;
-(void)setAggregate:(BOOL)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSMutableArray *)list;
-(void)setList:(NSMutableArray *)arg1 ;
-(id)filter:(id)arg1 ;
-(id)pack;
@end
