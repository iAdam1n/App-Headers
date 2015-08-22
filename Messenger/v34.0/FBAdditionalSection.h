/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBAdditionalSectionDelegate;
@class NSString, NSArray;

@interface FBAdditionalSection : NSObject {

	BOOL _isLoaded;
	BOOL _hidingMore;
	BOOL _showHeader;
	NSString* _name;
	NSString* _indexString;
	long long _showAllCutoff;
	NSArray* _data;
	id<FBAdditionalSectionDelegate> _delegate;
	/*^block*/id _loadDataCompletionBlock;

}

@property (nonatomic,copy,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * indexString;                                //@synthesize indexString=_indexString - In the implementation block
@property (nonatomic,readonly) BOOL isLoaded;                                              //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,readonly) long long showAllCutoff;                                    //@synthesize showAllCutoff=_showAllCutoff - In the implementation block
@property (nonatomic,copy) NSArray * data;                                                 //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL hidingMore;                                              //@synthesize hidingMore=_hidingMore - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdditionalSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id loadDataCompletionBlock;                                     //@synthesize loadDataCompletionBlock=_loadDataCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL showHeader;                                              //@synthesize showHeader=_showHeader - In the implementation block
-(BOOL)showLoading;
-(id)initWithName:(id)arg1 indexString:(id)arg2 maxSuggestionsToShow:(unsigned long long)arg3 ;
-(void)loadSectionData;
-(void)updateFinalData:(id)arg1 ;
-(BOOL)hasFaceboxes;
-(BOOL)showPartialData;
-(void)logSectionConversion;
-(long long)showAllCutoff;
-(BOOL)hidingMore;
-(void)setHidingMore:(BOOL)arg1 ;
-(id)loadDataCompletionBlock;
-(void)setLoadDataCompletionBlock:(id)arg1 ;
-(BOOL)showHeader;
-(void)setShowHeader:(BOOL)arg1 ;
-(void)setDelegate:(id<FBAdditionalSectionDelegate>)arg1 ;
-(id<FBAdditionalSectionDelegate>)delegate;
-(NSString *)name;
-(id)title;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(BOOL)isLoaded;
-(NSString *)indexString;
@end
