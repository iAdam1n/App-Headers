/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString;

@interface MarkdownTableCell : NSObject {

	NSAttributedString* _attributedRepresentation;

}

@property (nonatomic,retain) NSAttributedString * attributedRepresentation;              //@synthesize attributedRepresentation=_attributedRepresentation - In the implementation block
-(NSAttributedString *)attributedRepresentation;
-(void)populateWithCellMarkdown:(id)arg1 parser:(id)arg2 forcedCellFontOrNil:(id)arg3 cellConfiguration:(id)arg4 ;
-(void)setAttributedRepresentation:(NSAttributedString *)arg1 ;
@end
