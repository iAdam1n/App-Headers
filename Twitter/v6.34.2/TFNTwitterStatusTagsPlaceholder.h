/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterTagSet, TFNTwitterPlace, NSString, NSAttributedString, NSDictionary;

@interface TFNTwitterStatusTagsPlaceholder : NSObject {

	BOOL _showDash;
	BOOL _showLocation;
	BOOL _hasLocation;
	BOOL _hasPOI;
	BOOL _hasMediaTag;
	TFNTwitterTagSet* _tagSet;
	TFNTwitterPlace* _place;
	NSString* _text;
	long long _authenticatedUserID;
	NSAttributedString* _attributedPlaceholder;
	NSDictionary* _substitutions;

}

@property (nonatomic,readonly) TFNTwitterTagSet * tagSet;                             //@synthesize tagSet=_tagSet - In the implementation block
@property (nonatomic,readonly) TFNTwitterPlace * place;                               //@synthesize place=_place - In the implementation block
@property (nonatomic,retain) NSString * text;                                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long authenticatedUserID;                           //@synthesize authenticatedUserID=_authenticatedUserID - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedPlaceholder;              //@synthesize attributedPlaceholder=_attributedPlaceholder - In the implementation block
@property (nonatomic,retain) NSDictionary * substitutions;                            //@synthesize substitutions=_substitutions - In the implementation block
@property (assign,nonatomic) BOOL showDash;                                           //@synthesize showDash=_showDash - In the implementation block
@property (assign,nonatomic) BOOL showLocation;                                       //@synthesize showLocation=_showLocation - In the implementation block
@property (assign,nonatomic) BOOL hasLocation;                                        //@synthesize hasLocation=_hasLocation - In the implementation block
@property (assign,nonatomic) BOOL hasPOI;                                             //@synthesize hasPOI=_hasPOI - In the implementation block
@property (assign,nonatomic) BOOL hasMediaTag;                                        //@synthesize hasMediaTag=_hasMediaTag - In the implementation block
-(id)_attributedStringForUserTag:(id)arg1 ;
-(TFNTwitterTagSet *)tagSet;
-(long long)authenticatedUserID;
-(id)initWithText:(id)arg1 tagSet:(id)arg2 place:(id)arg3 authenticatedUserID:(long long)arg4 showDash:(BOOL)arg5 showLocation:(BOOL)arg6 ;
-(NSDictionary *)substitutions;
-(id)initWithText:(id)arg1 tagSet:(id)arg2 place:(id)arg3 authenticatedUserID:(long long)arg4 options:(unsigned long long)arg5 ;
-(void)setAuthenticatedUserID:(long long)arg1 ;
-(id)_localizedMediaTagPlaceholder;
-(id)_localizedLocationPlaceholder;
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(BOOL)showDash;
-(void)setShowDash:(BOOL)arg1 ;
-(BOOL)showLocation;
-(void)setShowLocation:(BOOL)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(BOOL)hasPOI;
-(void)setHasPOI:(BOOL)arg1 ;
-(BOOL)hasMediaTag;
-(void)setHasMediaTag:(BOOL)arg1 ;
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(TFNTwitterPlace *)place;
-(BOOL)hasLocation;
@end

