# Git学習プラン(mnoポートフォリオ構築と並行)

## Phase 0: 事前準備(単独素振り、所要30分程度)
本番のリポジトリを汚さないよう、使い捨てのdummyリポジトリで以下2点のみ先に感覚をつかんでおく。

- [x] **rebase -i**: 3〜4個の雑なコミットを作り、`squash`でまとめる/順序入れ替え/メッセージ修正を一通り試す
- [x] **conflict解消**: 2つのブランチで同じファイルの同じ行を編集し、mergeでconflictを発生させて手動解消する

## Phase 1〜4: 各ドキュメントをPRサイクルとして扱う

quickstart → CLIリファレンス → API → SDK の順に、それぞれ以下のサイクルを回す。

### quickstart
- [ ] GitHub Issue作成(例: `#1 Write quickstart doc`)
- [ ] Issue番号を含めたfeatureブランチ作成(例: `docs/1-quickstart`)
- [ ] 意味のある単位でコミットを分割(1コミット=1論点)
- [ ] PR作成、コミットメッセージにIssue番号を紐付け
- [ ] mainへマージ、Issueクローズ
- [ ] Jira連携済みなら該当チケットのステータス自動遷移を確認
- [ ] Slack通知が飛ぶことを確認

### CLIリファレンス
- [ ] GitHub Issue作成
- [ ] featureブランチ作成
- [ ] コミット分割
- [ ] PR作成
- [ ] **前のブランチと同じファイル(README等)を触ってconflictを意図的に発生させ、解消する**
- [ ] mainへマージ、Issueクローズ
- [ ] Jira/Slack連携確認

### API
- [ ] GitHub Issue作成
- [ ] featureブランチ作成
- [ ] コミット分割
- [ ] PR作成
- [ ] mainへマージ、Issueクローズ
- [ ] Jira/Slack連携確認

### SDK
- [ ] GitHub Issue作成
- [ ] featureブランチ作成
- [ ] コミット分割
- [ ] PR作成
- [ ] mainへマージ、Issueクローズ
- [ ] Jira/Slack連携確認

## Phase 5: リリース
- [ ] 4本揃った時点で `v0.1.0` タグを打ち、GitHub Releasesを作成
- [ ] リリースノートをIssue/PR履歴から手動でまとめる(自動生成機能があれば試す)

## 完了の目安
- [ ] rebase -iとconflict解消を、都度検索せず実行できる
- [ ] Issue番号とコミット/PRの紐付けが習慣化している
- [ ] GitHub→Jira→Slackの一連の配線が、少なくとも1サイクルで動作確認済み
