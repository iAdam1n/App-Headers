/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ALSdk, ALLogManager, NSString;

@interface ALTask : NSOperation {

	ALSdk* sdk;
	ALLogManager* logger;
	NSString* tag;

}

@property (nonatomic,retain) ALSdk * sdk; 
@property (nonatomic,retain) ALLogManager * logger; 
@property (nonatomic,retain) NSString * tag; 
-(id)initWithSdk:(id)arg1 ;
-(ALSdk *)sdk;
-(void)setSdk:(ALSdk *)arg1 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)run;
-(void)main;
-(ALLogManager *)logger;
-(void)setLogger:(ALLogManager *)arg1 ;
@end

