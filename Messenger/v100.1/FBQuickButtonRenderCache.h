/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary;

@interface FBQuickButtonRenderCache : NSObject {

	NSMutableDictionary* _cache;

}
+(id)sharedCache;
-(id)itemWithStateContents:(id)arg1 boundingRect:(CGRect)arg2 font:(id)arg3 ;
-(id)cachedImageForStateContents:(id)arg1 boundingRect:(CGRect)arg2 font:(id)arg3 ;
-(void)cacheImage:(id)arg1 forStateContents:(id)arg2 boundingRect:(CGRect)arg3 font:(id)arg4 ;
-(id)init;
@end
