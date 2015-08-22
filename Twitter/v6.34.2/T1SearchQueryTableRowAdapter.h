/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNStringDataViewAdapter.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterAccount, NSString;

@interface T1SearchQueryTableRowAdapter : TFNStringDataViewAdapter <TFNTwitterAuthenticated> {

	BOOL _showSearchIcon;
	TFNTwitterAccount* _account;
	NSString* _typeaheadString;

}

@property (nonatomic,retain) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL showSearchIcon;                      //@synthesize showSearchIcon=_showSearchIcon - In the implementation block
@property (nonatomic,copy) NSString * typeaheadString;                 //@synthesize typeaheadString=_typeaheadString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_boldedAttributedStringForAttributedString:(id)arg1 withTypeaheadString:(id)arg2 ;
+(NSRange)reverseBoldingRangeForText:(id)arg1 withTypeaheadString:(id)arg2 ;
-(id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(void)setShowSearchIcon:(BOOL)arg1 ;
-(BOOL)_shouldDisplayTapaheadButtonForController:(id)arg1 forSearchQuery:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)showSearchIcon;
-(NSString *)typeaheadString;
-(void)setTypeaheadString:(NSString *)arg1 ;
-(id)init;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
