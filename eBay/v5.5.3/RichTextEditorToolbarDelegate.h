/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RichTextEditorToolbarDelegate <UIScrollViewDelegate>
@required
-(void)richTextEditorToolbarDidSelectBold;
-(void)richTextEditorToolbarDidSelectItalic;
-(void)richTextEditorToolbarDidSelectUnderline;
-(void)richTextEditorToolbarDidSelectStrikeThrough;
-(void)richTextEditorToolbarDidSelectBulletedList;
-(void)richTextEditorToolbarDidSelectParagraphIndentation:(int)arg1;
-(BOOL)isOrderedList;
-(void)richTextEditorToolbarDidSelectOrderedList;
-(BOOL)isBulletedList;
-(void)richTextEditorToolbarDidSelectPreview;
-(void)richTextEditorToolbarDidSelectParagraphFirstLineHeadIndent;
-(void)richTextEditorToolbarDidSelectFontSize:(id)arg1;
-(void)richTextEditorToolbarDidSelectFontWithName:(id)arg1;
-(void)richTextEditorToolbarDidSelectTextBackgroundColor:(id)arg1;
-(void)richTextEditorToolbarDidSelectTextForegroundColor:(id)arg1;
-(void)richTextEditorToolbarDidSelectTextAlignment:(long long)arg1;

@end
