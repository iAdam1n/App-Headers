/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface SKDataResult : NSObject {

	NSString* dataId;
	NSString* type;
	NSString* status;
	int checksum;
	int count;
	int force;

}

@property (nonatomic,retain) NSString * dataId; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * status; 
@property (assign,nonatomic) int checksum; 
@property (assign,nonatomic) int count; 
@property (assign,nonatomic) int force; 
-(BOOL)parseDataResult:(id)arg1 ;
-(void)setDataId:(NSString *)arg1 ;
-(NSString *)dataId;
-(void)dealloc;
-(int)count;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setCount:(int)arg1 ;
-(void)setForce:(int)arg1 ;
-(int)force;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setChecksum:(int)arg1 ;
-(int)checksum;
@end
