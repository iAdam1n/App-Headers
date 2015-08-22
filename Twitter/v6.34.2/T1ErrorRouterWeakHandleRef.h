/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCopying.h>

@protocol T1ErrorHandler;
@interface T1ErrorRouterWeakHandleRef : NSObject <NSCopying> {

	id<T1ErrorHandler> _handler;

}

@property (assign,nonatomic,__weak) id<T1ErrorHandler> handler;              //@synthesize handler=_handler - In the implementation block
+(id)forHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHandler:(id<T1ErrorHandler>)arg1 ;
-(id<T1ErrorHandler>)handler;
@end
