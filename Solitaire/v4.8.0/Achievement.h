/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Achievement : NSObject {

	int aid;
	double percent;
	int count;
	unsigned char submitted;
	unsigned char completed;

}

@property (assign) int aid; 
@property (assign) double percent; 
@property (assign) int count; 
@property (assign) unsigned char submitted; 
@property (assign) unsigned char completed; 
-(unsigned char)completed;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)count;
-(void)setCompleted:(unsigned char)arg1 ;
-(void)setCount:(int)arg1 ;
-(void)setAid:(int)arg1 ;
-(int)aid;
-(id)getDescription;
-(unsigned char)submitted;
-(void)setSubmitted:(unsigned char)arg1 ;
-(double)percent;
-(void)setPercent:(double)arg1 ;
@end

