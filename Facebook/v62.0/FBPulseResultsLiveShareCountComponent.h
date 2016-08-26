/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class CKComponent, NSString, FBSearchResultsContext;

@interface FBPulseResultsLiveShareCountComponent : CKCompositeComponent {

	CKComponent* _countComponent;
	unsigned long long _shareCount;
	NSString* _urlString;
	FBSearchResultsContext* _context;

}

@property (nonatomic,readonly) unsigned long long shareCount;                 //@synthesize shareCount=_shareCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlString;                     //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) FBSearchResultsContext * context;              //@synthesize context=_context - In the implementation block
+(id)newWithExternalURL:(id)arg1 context:(id)arg2 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(FBSearchResultsContext *)context;
-(NSString *)urlString;
-(unsigned long long)shareCount;
@end
