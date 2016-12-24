/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface DataBlock : NSObject {

	BOOL deleteall;
	NSString* userId;
	NSMutableArray* datalist;

}

@property (assign,nonatomic) BOOL deleteall; 
@property (nonatomic,retain) NSString * userId; 
@property (nonatomic,retain) NSMutableArray * datalist; 
-(NSMutableArray *)datalist;
-(id)getDictionary;
-(int)getCheckSum;
-(BOOL)deleteall;
-(void)setDeleteall:(BOOL)arg1 ;
-(void)setDatalist:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)addData:(id)arg1 ;
-(void)removeData:(id)arg1 ;
@end
