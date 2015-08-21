/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNDataViewSectionController.h>
#import <Twitter/T1TimelineSuggestsDismissControllerDelegate.h>

@class TFNTwitterSuggestsModule, TFNTwitterAccount, TFNTwitterStream, NSString;

@interface T1SuggestsModuleDataViewSectionController : TFNDataViewSectionController <T1TimelineSuggestsDismissControllerDelegate> {

	TFNTwitterSuggestsModule* _suggestsModule;
	TFNTwitterAccount* _account;
	TFNTwitterStream* _stream;

}

@property (nonatomic,retain) TFNTwitterSuggestsModule * suggestsModule;                                                      //@synthesize suggestsModule=_suggestsModule - In the implementation block
@property (assign,nonatomic,__weak) TFNNewItemsDataViewController*<TFNTwitterAuthenticated> dataViewController; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterStream * stream;                                                                      //@synthesize stream=_stream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sectionControllerWithDataViewController:(id)arg1 suggestModule:(id)arg2 ;
-(void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3 ;
-(TFNTwitterSuggestsModule *)suggestsModule;
-(void)suggestsDismissController:(id)arg1 didDismissSuggestsModule:(id)arg2 ;
-(void)setSuggestsModule:(TFNTwitterSuggestsModule *)arg1 ;
-(id)items;
-(void)dismiss;
-(void)setStream:(TFNTwitterStream *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterStream *)stream;
@end

