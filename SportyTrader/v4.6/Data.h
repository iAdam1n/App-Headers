/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface Data : NSObject {

	NSString* dataId;
	int type;
	NSMutableArray* actions;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSString * dataId; 
@property (nonatomic,retain) NSMutableArray * actions; 
-(void)setDataId:(NSString *)arg1 ;
-(NSString *)dataId;
-(id)getDictionary;
-(int)getCheckSum;
-(id)initWithId:(id)arg1 datatype:(int)arg2 ;
-(void)removeAction:(id)arg1 ;
-(void)dealloc;
-(NSMutableArray *)actions;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)addAction:(id)arg1 ;
-(id)typeString;
-(void)setActions:(NSMutableArray *)arg1 ;
@end
