/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCopying.h>

@interface FBStreamAnalyticsContext : NSObject <NSCopying> {

	/*^block*/id _extraParameters;
	FBStreamAnalyticsContext* _parent;

}

@property (nonatomic,copy,readonly) id extraParameters;                        //@synthesize extraParameters=_extraParameters - In the implementation block
@property (nonatomic,readonly) FBStreamAnalyticsContext * parent;              //@synthesize parent=_parent - In the implementation block
-(id)initWithExtraParameters:(/*^block*/id)arg1 ;
-(id)_initWithParent:(id)arg1 extraParameters:(/*^block*/id)arg2 ;
-(id)childAnalyticsContextWithExtraParameters:(/*^block*/id)arg1 ;
-(id)extraParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBStreamAnalyticsContext *)parent;
@end

