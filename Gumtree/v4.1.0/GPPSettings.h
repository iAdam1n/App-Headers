/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, GPPACL;

@interface GPPSettings : NSObject {

	BOOL _shouldForceWeb;
	BOOL _domainRestricted;
	BOOL _underageWarning;
	BOOL _showAclPickerFirst;
	BOOL _showAddToCircleWarning;
	BOOL _enableDefaultAddToCircle;
	BOOL _enableAddToCircle;
	NSString* _bundleURL;
	GPPACL* _stickyACLs;
	NSString* _addToCircleWarningText;
	unsigned long long _showcasedSuggestionCount;
	unsigned long long _suggestionCount;

}

@property (assign,nonatomic) BOOL shouldForceWeb;                                      //@synthesize shouldForceWeb=_shouldForceWeb - In the implementation block
@property (nonatomic,copy) NSString * bundleURL;                                       //@synthesize bundleURL=_bundleURL - In the implementation block
@property (assign,nonatomic) BOOL domainRestricted;                                    //@synthesize domainRestricted=_domainRestricted - In the implementation block
@property (assign,nonatomic) BOOL underageWarning;                                     //@synthesize underageWarning=_underageWarning - In the implementation block
@property (nonatomic,retain) GPPACL * stickyACLs;                                      //@synthesize stickyACLs=_stickyACLs - In the implementation block
@property (assign,nonatomic) BOOL showAclPickerFirst;                                  //@synthesize showAclPickerFirst=_showAclPickerFirst - In the implementation block
@property (assign,nonatomic) BOOL showAddToCircleWarning;                              //@synthesize showAddToCircleWarning=_showAddToCircleWarning - In the implementation block
@property (nonatomic,copy) NSString * addToCircleWarningText;                          //@synthesize addToCircleWarningText=_addToCircleWarningText - In the implementation block
@property (assign,nonatomic) unsigned long long showcasedSuggestionCount;              //@synthesize showcasedSuggestionCount=_showcasedSuggestionCount - In the implementation block
@property (assign,nonatomic) unsigned long long suggestionCount;                       //@synthesize suggestionCount=_suggestionCount - In the implementation block
@property (assign,nonatomic) BOOL enableDefaultAddToCircle;                            //@synthesize enableDefaultAddToCircle=_enableDefaultAddToCircle - In the implementation block
@property (assign,nonatomic) BOOL enableAddToCircle;                                   //@synthesize enableAddToCircle=_enableAddToCircle - In the implementation block
-(void)setDomainRestricted:(BOOL)arg1 ;
-(void)setUnderageWarning:(BOOL)arg1 ;
-(BOOL)underageWarning;
-(BOOL)domainRestricted;
-(BOOL)shouldForceWeb;
-(void)setShouldForceWeb:(BOOL)arg1 ;
-(GPPACL *)stickyACLs;
-(void)setStickyACLs:(GPPACL *)arg1 ;
-(BOOL)showAclPickerFirst;
-(void)setShowAclPickerFirst:(BOOL)arg1 ;
-(BOOL)showAddToCircleWarning;
-(void)setShowAddToCircleWarning:(BOOL)arg1 ;
-(NSString *)addToCircleWarningText;
-(void)setAddToCircleWarningText:(NSString *)arg1 ;
-(unsigned long long)showcasedSuggestionCount;
-(void)setShowcasedSuggestionCount:(unsigned long long)arg1 ;
-(unsigned long long)suggestionCount;
-(void)setSuggestionCount:(unsigned long long)arg1 ;
-(BOOL)enableDefaultAddToCircle;
-(void)setEnableDefaultAddToCircle:(BOOL)arg1 ;
-(BOOL)enableAddToCircle;
-(void)setEnableAddToCircle:(BOOL)arg1 ;
-(NSString *)bundleURL;
-(void)setBundleURL:(NSString *)arg1 ;
@end

