/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString, SKPConversation, NSArray, SKPMoji, SKPArrayFilter;

@interface SKPMojiPromotionDataLoader : NSObject {

	BOOL _observingProvisioning;
	BOOL _invalidated;
	UIImage* _bannerImage;
	NSString* _bannerTitle;
	long long _promotionTabIndex;
	SKPConversation* _conversationToPromote;
	NSArray* _allPacks;
	SKPMoji* _moji;
	SKPArrayFilter* _recentsFilter;

}

@property (nonatomic,retain) UIImage * bannerImage;                                                  //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,copy) NSString * bannerTitle;                                                   //@synthesize bannerTitle=_bannerTitle - In the implementation block
@property (assign,nonatomic) long long promotionTabIndex;                                            //@synthesize promotionTabIndex=_promotionTabIndex - In the implementation block
@property (nonatomic,retain) SKPConversation * conversationToPromote;                                //@synthesize conversationToPromote=_conversationToPromote - In the implementation block
@property (nonatomic,retain) NSArray * allPacks;                                                     //@synthesize allPacks=_allPacks - In the implementation block
@property (nonatomic,retain) SKPMoji * moji;                                                         //@synthesize moji=_moji - In the implementation block
@property (nonatomic,retain) SKPArrayFilter * recentsFilter;                                         //@synthesize recentsFilter=_recentsFilter - In the implementation block
@property (assign,getter=isObservingProvisioning,nonatomic) BOOL observingProvisioning;              //@synthesize observingProvisioning=_observingProvisioning - In the implementation block
@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                                  //@synthesize invalidated=_invalidated - In the implementation block
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
+(id)keyPathsForValuesAffectingReady;
-(SKPMoji *)moji;
-(void)setMoji:(SKPMoji *)arg1 ;
-(void)startObservingProvisioning;
-(void)stopObservingProvisioning;
-(NSArray *)allPacks;
-(void)setAllAvailablePacks:(id)arg1 ;
-(void)setAllPacks:(NSArray *)arg1 ;
-(BOOL)isObservingProvisioning;
-(void)setObservingProvisioning:(BOOL)arg1 ;
-(void)setPromotionTabIndex:(long long)arg1 ;
-(SKPArrayFilter *)recentsFilter;
-(void)setConversationToPromote:(SKPConversation *)arg1 ;
-(long long)promotionTabIndex;
-(SKPConversation *)conversationToPromote;
-(void)setRecentsFilter:(SKPArrayFilter *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)update;
-(NSString *)bannerTitle;
-(void)setBannerImage:(UIImage *)arg1 ;
-(UIImage *)bannerImage;
-(BOOL)isInvalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setBannerTitle:(NSString *)arg1 ;
-(BOOL)isReady;
@end

