/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EntitySwapper : NSObject {

	NSString* _currentScene;

}

@property (nonatomic,retain) NSString * currentScene;              //@synthesize currentScene=_currentScene - In the implementation block
+(id)instance;
-(NSString *)currentScene;
-(void)setCurrentScene:(NSString *)arg1 ;
-(id)getFilePathFromFileUrl:(id)arg1 ;
-(BOOL)swapScene:(id)arg1 ;
@end
