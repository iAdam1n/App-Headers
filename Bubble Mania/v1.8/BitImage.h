/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BitImage : NSObject {

	char* image;
	long long size;
	int width;
	int height;

}

@property (assign,nonatomic) int width; 
@property (assign,nonatomic) int height; 
-(void)constructWithW:(int)arg1 H:(int)arg2 ;
-(void)constructWithW:(int)arg1 H:(int)arg2 data:(char*)arg3 ;
-(void)setPropertiesFromW:(int)arg1 H:(int)arg2 ;
-(id)initWithW:(int)arg1 H:(int)arg2 ;
-(id)initWithW:(int)arg1 H:(int)arg2 data:(char*)arg3 ;
-(void)setX:(int)arg1 Y:(int)arg2 value:(BOOL)arg3 ;
-(BOOL)getX:(int)arg1 Y:(int)arg2 ;
-(void)constructWithW:(int)arg1 H:(int)arg2 size:(int)arg3 data:(char*)arg4 ;
-(long long)size;
-(void)dealloc;
-(char*)data;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
@end

