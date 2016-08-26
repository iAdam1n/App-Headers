/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/BFAppLinkResolving.h>

@class NSMutableDictionary, NSString;

@interface FBAppLinkResolver : NSObject <BFAppLinkResolving> {

	NSMutableDictionary* _cachedLinks;
	long long _userInterfaceIdiom;

}

@property (nonatomic,retain) NSMutableDictionary * cachedLinks;              //@synthesize cachedLinks=_cachedLinks - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;                   //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)resolver;
-(void)setCachedLinks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedLinks;
-(id)appLinksFromURLsInBackground:(id)arg1 ;
-(id)initWithUserInterfaceIdiom:(long long)arg1 ;
-(id)appLinkFromURLInBackground:(id)arg1 ;
-(long long)userInterfaceIdiom;
-(void)dealloc;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
@end
