/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIView, NSString, TFNTwitterCardViewEventHeatMapData, NSNumber, NSArray, NSDictionary, TFNTwitterAccount, T1NativePlayerCardPlayerContainerView;

@interface TFNTwitterCardViewEvent : NSObject {

	UIView* _view;
	NSString* _eventType;
	TFNTwitterCardViewEventHeatMapData* _heatMapData;
	NSNumber* _userID;
	NSArray* _images;
	NSArray* _imageSpecs;
	long long _imageSpecIndex;
	NSString* _URL;
	NSString* _composeText;
	/*^block*/id _composeCompletionBlock;
	NSString* _capiURI;
	NSDictionary* _capiData;
	TFNTwitterAccount* _account;
	long long _playerType;
	T1NativePlayerCardPlayerContainerView* _playerContainerView;

}

@property (nonatomic,readonly) NSDictionary * viewEvent; 
@property (nonatomic,__weak,readonly) UIView * view;                                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSString * eventType;                                                   //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) TFNTwitterCardViewEventHeatMapData * heatMapData;                       //@synthesize heatMapData=_heatMapData - In the implementation block
@property (nonatomic,readonly) NSNumber * userID;                                                      //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) NSArray * images;                                                         //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSArray * imageSpecs;                                                     //@synthesize imageSpecs=_imageSpecs - In the implementation block
@property (assign,nonatomic) long long imageSpecIndex;                                                 //@synthesize imageSpecIndex=_imageSpecIndex - In the implementation block
@property (nonatomic,retain) NSString * URL;                                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * composeText;                                                   //@synthesize composeText=_composeText - In the implementation block
@property (nonatomic,copy) id composeCompletionBlock;                                                  //@synthesize composeCompletionBlock=_composeCompletionBlock - In the implementation block
@property (nonatomic,retain) NSString * capiURI;                                                       //@synthesize capiURI=_capiURI - In the implementation block
@property (nonatomic,copy) NSDictionary * capiData;                                                    //@synthesize capiData=_capiData - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long playerType;                                                     //@synthesize playerType=_playerType - In the implementation block
@property (nonatomic,retain) T1NativePlayerCardPlayerContainerView * playerContainerView;              //@synthesize playerContainerView=_playerContainerView - In the implementation block
+(long long)scribeCardTypeForViewElementType:(long long)arg1 ;
+(long long)scribeActionTypeForViewActionType:(long long)arg1 ;
-(NSDictionary *)viewEvent;
-(id)initWithView:(id)arg1 eventType:(id)arg2 heatMapData:(id)arg3 ;
-(NSString *)capiURI;
-(NSArray *)imageSpecs;
-(long long)imageSpecIndex;
-(id)initWithView:(id)arg1 eventType:(id)arg2 ;
-(id)initWithView:(id)arg1 userID:(id)arg2 eventType:(id)arg3 ;
-(void)setComposeText:(NSString *)arg1 ;
-(void)setComposeCompletionBlock:(id)arg1 ;
-(void)setImageSpecs:(NSArray *)arg1 ;
-(void)setImageSpecIndex:(long long)arg1 ;
-(T1NativePlayerCardPlayerContainerView *)playerContainerView;
-(void)setPlayerType:(long long)arg1 ;
-(void)setPlayerContainerView:(T1NativePlayerCardPlayerContainerView *)arg1 ;
-(void)setCapiURI:(NSString *)arg1 ;
-(void)setCapiData:(NSDictionary *)arg1 ;
-(id)initWithView:(id)arg1 userID:(id)arg2 eventType:(id)arg3 heatMapData:(id)arg4 ;
-(NSString *)composeText;
-(id)composeCompletionBlock;
-(TFNTwitterCardViewEventHeatMapData *)heatMapData;
-(NSDictionary *)capiData;
-(NSString *)eventType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(UIView *)view;
-(NSArray *)images;
-(NSString *)URL;
-(void)setURL:(NSString *)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(NSNumber *)userID;
-(long long)playerType;
@end
